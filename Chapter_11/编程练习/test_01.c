// 设计并测试一个函数,从输入中获取n个字符(包括空白,制表符,换行符),把结果存储在一个数组里,他的地址被传递作为一个参数
#include <stdio.h>
#define SIZE 40
char * read_char(char * st,int n);

int main(int argc,char * argv[])
{
    char test[SIZE];
    puts("Start to test function.Enter a  string.");
    read_char(test,SIZE);
    puts(test);

    return 0;
}

char * read_char(char * st,int n)
{
    int i=0;
    do
    {
        st[i]=getchar();
    }while(st[i]!=EOF && ++i<n);

    return st;
}