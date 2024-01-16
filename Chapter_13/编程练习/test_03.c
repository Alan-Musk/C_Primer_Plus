// 编写一个文件拷贝程序,提示用户输入文本文件名,并以该文件名作为原始文件名和输出文件名.该程序要使用ctype.h中的toupper()函数
// 在写入到输出文件时把所有文本转换为大写.使用标准I/O和文本模式
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc,char * argv[])
{
    FILE * fp;
    char file_name[80];
    char ch;
    printf("Input the filename:");
    scanf("%s",file_name);

    if((fp=fopen(file_name,"r+"))==NULL)
    {
        printf("Can't open file %s.\n",file_name);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF)
    {
        fseek(fp,-sizeof(char),SEEK_CUR);
        putc(toupper(ch),fp);
    }
    fclose(fp);
    return 0;
}