// 编写一个名为string_in()的函数,接受两个指向字符串的指针作为参数.如果第二个字符串包含在第一个字符串中,该函数将返回第一个字符串开始的地址.
// 例如,string_in("hats","at")将返回hats中a的地址.否则,该函数将返回空指针.在一个完整的程序中测试该函数,使用一个循环给函数提供输入值
#include <stdio.h>
#define SIZE 20
char * string_in(char * s1,char * s2);
int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    char * address;
    printf("请输入要字符串:");
    fgets(s1,SIZE,stdin);
    printf("请输入要查找的第二个字符串:");
    fgets(s2,SIZE,stdin);
    address=string_in(s1,s2);
    if(address!=NULL)
    {
        printf("找到了地址为:%p",address);
    }
    else
    {
        puts("没有找到");
    }

    return 0;
}

char * string_in(char * s1,char * s2)
{
    char * address=NULL;
    while(*s1!='\0')
    {
        //循环确认首字符
        if(*s1==*s2)
        {
            address=s2;
            //再循环s2对比每一个字符
            while(*s1==*s2&&*s2!='\0')
            {
                s1++;
                s2++;
                if(*s1!=*s2)
                {
                    address=NULL;
                }
            }
        }
        else
        {
            s1++;
        }
    }

    return address;
}