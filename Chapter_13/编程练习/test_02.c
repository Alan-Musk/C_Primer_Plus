// 编写一个文件拷贝程序,该程序通过命令行获取原始文件名和拷贝文件名.尽量使用标准I/O和二进制模式
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *  argv[])
{
    FILE * fp;
    FILE * input;
    char buff[512];
    //检测参数,打开文件是否正确
    if(argc!=3)
    {
        printf("参数不正确");
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(argv[1],"rb"))==NULL)
    {
        printf("%s打开有误.",argv[1]);
        exit(EXIT_FAILURE);
    }
    if((input=fopen(argv[2],"wb"))==NULL)
    {
        printf("%s打开有误",argv[2]);
        exit(EXIT_FAILURE);
    }
    size_t bytes;
    while((bytes=fread(buff,sizeof(char),512,fp))>0)
    {
        fwrite(buff,sizeof(char),512,input);
    }
    fclose(fp);
    fclose(input);
    return 0;
}