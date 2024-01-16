// 使用字符分类函数实现atoi()函数,如果输入的字符串不是纯数字,该函数返回0
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int my_atoi(char st[]);

int main(int argc,char * argv[])
{
    int num=0;
    num=my_atoi("890");
    printf("%d\n",num);
    return 0;
}

int my_atoi(char st[])
{
    float mul=0.1;
    int sum=0;
    int num=0;
    int length=strlen(st);
    while(st[num]!='\0'&&length>0)
    {
        if(!isdigit(st[num]))
        {
            return 0;
        }
        length--;
        mul*=10;
        sum=sum+((int)st[length]-48)*mul;
    }
    return sum;
}