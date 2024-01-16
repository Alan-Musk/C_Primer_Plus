// 修改并编程练习1的函数,在n个字符后停止,或在读到第一个空白,制表符,或换行符时停止,哪个先遇到哪个停止,不能只使用scanf()
#include <stdio.h>
#define SIZE 3
char * read(char * st,int n);

int main(void)
{
    char st[SIZE];
    read(st,SIZE);
    puts(st);

    return 0;
}

char * read(char * st,int n)
{
    int i=0;

    do
    {
        st[i]=getchar();
        if(st[i]=='\n'||st[i]=='\t'||st[i]==' ')
        {
            break;
        }
    }while(st[i]!=EOF&&++i<n);

    return st;
}