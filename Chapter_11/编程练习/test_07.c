// strncpy(s1,s2,n)函数把s2中的n个字符拷贝到s1中,截断s2,或者有必要的话在末尾添加空字符.
// 如果s2的长度是n或多于n,目标字符串不能以空字符结尾.该函数返回s1.自己编写一个这样的函数,名为mystrncpy(),在一个完整的程序中测试该函数,使用一个循环给函数提供输入值
#include <stdio.h>
#define SIZE 100
char * mystrncpy(char * s1,char * s2,int n);
int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    printf("请输入要拷贝的字符:\n");
    fgets(s2,SIZE,stdin);
    mystrncpy(s1,s2,20);
    puts(s1);
    return 0;
}

char * mystrncpy(char * s1,char * s2,int n)
{
    int count=0;
    while(*s2!='\0'&&count<n)
    {
        *s1=*s2;
        s1++;
        s2++;
        count++;
    }
    if(SIZE<n)
    {
        *s1++='\0';
    }

    return s1;
}