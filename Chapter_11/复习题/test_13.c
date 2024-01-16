// 重写程序清单11.21,使用ctype.h头文件中的函数,以便无论用户选择大写还是小写,该程序都能正确识别答案
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "GRANT"
#define SIZE 40
char * s_gets(char * st,int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    while(strcmp(try,ANSWER)!=0)
    {
        puts("No,that's wrong.Try agian.");
        s_gets(try,SIZE);
    }
    puts("That's right!");

    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;
    int i=0;
    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        while(st[i]!='\n'&&st[i]!='\0')
        {
            i++;
        }
        if(st[i]=='\n')
        {
            st[i]='\0';
        }
        else
        {
            while(getchar()!='\n')
            {
                continue;
            }
        }
    }
    while(*ret_val!='\0')
    {
        *ret_val=toupper(*ret_val);
        ret_val++;
    }
    return ret_val;
}