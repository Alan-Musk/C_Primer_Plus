// 编写一个函数接受一个字符串作为参数,并删除字符串中的空格.在一个程序中测试该函数,使用循环读取输入行,直到用户输入一行空行.
// 该程序应该应用该函数读取每个输入的字符串,并显示处理后的结果
#include <stdio.h>
#define SIZE 100
void delete(char * st);
int main(void)
{
    char st[SIZE];
    printf("请输入一串字符串(空行退出):\n");
    fgets(st,SIZE,stdin);
    while(*st!='\n')
    {
        delete(st);
        printf("%s",st);
        printf("请输入一串字符串(空行退出):\n");
        fgets(st,SIZE,stdin);
    }
    return 0;
}
void delete(char * st)
{
    int i=0;
    while(*st!='\0')
    {
        if(*(st+i)==' ')
        {
            i++;
        }
        *st=*(st+i);
        st++;
    }
}