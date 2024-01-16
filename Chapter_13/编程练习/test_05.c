// 修改程序清单13.5中程序(append.c),用命令行界面代替交互式界面
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE * source,FILE *dest);

int main(int argc,char * argv[])
{
    FILE *fa,*fs;   //fa指向目标文件,fs指向源文件
    int ch;
    int i=2;
    //检查文件打开是否成功
    if((fa=fopen(argv[1],"a+"))==NULL)
    {
        fprintf(stderr,"Can't open %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    //检测缓冲区是否建立成功
    if(setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0)
    {
        fputs("Can't create output buffer\n",stderr);
        exit(EXIT_FAILURE);
    }
    //输入来源文件夹名
    for(;i<argc;i++)
    {
        if(strcmp(argv[1],argv[i])==0)    //检测文件名是否相同
        {
            fputs("Can't append file to itself\n",stderr);
        }
        else if((fs=fopen(argv[i],"r"))==NULL) //再检测是否打开成功
        {
            fprintf(stderr,"Can't open %s\n",argv[i]);
        }
        else
        {           //检测通过,正式处理增加
            if(setvbuf(fs,NULL,_IOFBF,BUFSIZE)!=0)
            {
                fputs("Can't create input buffer\n",stderr);
                continue;
            }
            append(fs,fa);
            if(ferror(fs)!=0)
            {
                fprintf(stderr,"Error in reading file %s.\n",argv[1]);
            }
            if(ferror(fa)!=0)
            {
                fprintf(stderr,"Error in reading file %s.\n",argv[i]);
            }
            fclose(fs);
        }
    }
    printf("Done appending. %d files appended.\n",argc-1);
    rewind(fa);
    printf("%s contents:\n",argv[1]);
    while((ch=getc(fa))!=EOF)
    {
        putchar(ch);
    }
    puts("Done displaying.");
    fclose(fa);

    return 0;
}
void append(FILE * source,FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];  //只分配一次
    while((bytes=fread(temp,sizeof(char),BUFSIZE,source))>0)
    {
        fwrite(temp,sizeof(char),bytes,dest);
    }
}