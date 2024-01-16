// 编写一个程序打开两个文件.可以使用命令行参数或提示用户输入文件名
// a.以这样的顺序打印,打印第一个文件的第一行,第二个文件的第一行,第一个文件的第二行,第二个文件的第二行,依次类推,打印到行数较多文件的最后一行
// b.修改改程序,把行相同的行打印成一行
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_SIZE 256

int main(int argc,char * argv[])
{
    //定义两个读入行的缓冲区
    char * line_one=(char *)malloc(LINE_SIZE*sizeof(char));
    char * line_two=(char *)malloc(LINE_SIZE*sizeof(char));
    //输入文件的相关设定
    int first_end=1;
    if(argc!=3)
    {
        fprintf(stderr,"Usage:%s filename filename",argv[0]);
        exit(EXIT_FAILURE);
    }
    FILE *fp1, *fp2;
    if((fp1=fopen(argv[1],"r"))==NULL)
    {
        fprintf(stderr,"Open %s failed\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if((fp2=fopen(argv[2],"r"))==NULL)
    {
        fprintf(stderr,"Open %s failed\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    //开始打印独立行
    printf("Print the line one bye one.\n");
    int i=1;
    while(fgets(line_one,LINE_SIZE,fp1)!=NULL)
    {
        if(fgets(line_two,LINE_SIZE,fp2)!=NULL)
        {
            //两个文件逐一打印
            printf("File 1 LINE NO.%d:%s",i,line_one);
            printf("File 2 LINE NO.%d:%s",i,line_two);
            i++;
        }
        else
        {
            printf("File 1 LINE NO.%d:%s",i,line_one);
            i++;
        }
    }
    //如果第2个文件还有未读取的行,则继续打印第2个文件
    while(fgets(line_two,LINE_SIZE,fp2)!=NULL)
    {
        printf("File 2 LINE NO.%d:%s",i++,line_two);
    }
    //合并打印
    printf("\nPrint the combine line.\n");
    rewind(fp1);
    rewind(fp2);
    i=1;
    while(fgets(line_one,LINE_SIZE,fp1)!=NULL)
    {
        if(fgets(line_two,LINE_SIZE,fp2)!=NULL)
        {
            printf("LINE NO.%d:",i);
            while(*line_one!='\n')
            {
                putchar(*line_one++);
            }
            putchar('+');
            printf(" %s",line_two);
            i++;
        }
        else
        {
            printf("LINE NO.%d:%s",i,line_one);
            i++;
        }
    }
    while(fgets(line_two,LINE_SIZE,fp2)!=NULL)
    {
        printf("LINE NO.%d:%s",i++,line_two);
    }
    fclose(fp1);
    fclose(fp2);
    free(line_one);
    free(line_two);
    return 0;
}