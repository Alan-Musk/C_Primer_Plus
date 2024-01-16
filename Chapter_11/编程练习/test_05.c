// 设计并测试一个函数,搜索第一个函数形参指定的字符串,在其中查找第二个函数形参制定的字符首次出现的位置.
// 如果成功,该函数返回指向该字符的指针,如果在字符串中未找到指定的字符,则返回空指针.(功能与strchr()函数功能相同).
// 在一个完整的程序中测试该函数,使用一个循环给函数提供输入值
#include <stdio.h>
#define SIZE 80
char * string_char(char * st,char c);

int main(int argc,char * agrv[])
{
    char source[SIZE];
    char dest=' ';
    char *position;
    printf("Enter a String:");
    fgets(source,SIZE,stdin);

    while(dest!=EOF)
    {
        printf("Enter a char to find(EOF for Quit):");
        //读取目标字符串,且删除多余的换行符
        while((dest=getchar())=='\n')
        {
            continue;
        }
        if((position=string_char(source,dest))!=NULL)
        {
            printf("Found the char %c in %p\n",*position,position);
        }
        else
        {
            printf("Char %c not found,Try again?\n",dest);
        }
    }
    return 0;
}

char * string_char(char * st,char c)
{
    while(*st!='\0')
    {
        if(*st==c)
        {
            return st;
        }
        else
        {
            st++;
        }
    }
    return NULL;
}