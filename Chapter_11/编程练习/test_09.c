// 编写一个函数,把字符串中的内容用其反序字符串代替,在一个完整的程序中测试该函数,使用一个循环给函数提供输入值
#include <stdio.h>
#include <string.h>
#define SIZE 100
void back(char * st);

int main(void)
{
    char st[SIZE];
    printf("请输入字符串:\n");
    fgets(st,SIZE,stdin);
    while(*st!=EOF)
    {
        back(st);
        printf("%s",st);
        printf("请输入字符串:\n");
        fgets(st,SIZE,stdin);
    }
    puts("Done!");

    return 0;
}
void back(char * st)
{
    char sort[SIZE];
    int length=strlen(st);
    int i=0;
    while(length>0)
    {
        sort[i]=*(st+length-2);
        length--;
        i++;
    }
    i=0;
    while(sort[i]!='\0')
    {
        *st=sort[i];
        st++;
        i++;
    }
}