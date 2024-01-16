// 本章定义的s_gets()函数,用指针表示法代替数字表示法便可减少一个变量i,请改写该函数
#include <stdio.h>
#include <string.h>
#define SIZE 80
char  * s_gets(char * st,int n);
int main(void)
{
    char flower[SIZE];
    char addon []="s smell like old shoes.";

    printf("请输入something:\n");
    if(s_gets(flower,SIZE))
    {
        strcat(flower,addon);
        puts(flower);
    }
    else
    {
        puts("End of file encoutered!");
    }
    puts("bye");

    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;

    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        while(*st!='\n'&&*st!='\0')
        {
            st++;
        }
        if(*st=='\n')
        {
            *st='\0';
        }
        else
        {
            while(getchar()!='\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}