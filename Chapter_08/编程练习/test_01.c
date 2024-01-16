//设计一个程序,统计在读到文件结尾之前读取的字符数

#include <stdio.h>

int main(void)
{
    char ch;
    int space_ch=0,letter=0,others=0;//空白字符,普通字符,其他字符
    ch=getchar();
    do
    {
        if(ch==' '||ch=='\t'||ch=='\n')
        {
            space_ch++;
        }
        else if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        {
            letter++;
        }
        else
        {
            others++;
        }
    }while((ch=getchar())!=EOF);
    printf("空白字符有%d,普通字符有%d,其他字符有%d\n",space_ch,letter,others);

    return 0;
}