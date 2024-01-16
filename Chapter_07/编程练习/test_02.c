//编写一个程序读取输入,读到'#'字符停止.程序要打印每个输入的字符以及对应的ASCII码(十进制).每行打印8个"字符-ASCII码"组合
//建议:使用字符计数和求摸运算符(%)在每8个循环周期时打印一个换行符
#include <stdio.h>

int main(void)
{
    char ch;
    int num=1;

    while((ch=getchar())!='#')
    {
        if(ch=='\n')
        {
            printf("'\\n'-%-5d",ch);//读者编写的时候遇到的有趣问题,直接%c成换行了,lol
        }
        else if(ch=='\t')
        {
            printf("'\\t'-%-5d",ch);
        }
        else
        {
            printf("'%c'-%-5d",ch,ch);
        }
        if(num%8==0)
        {
            printf("\n");
        }
        num++;
    }
    printf("Done!\n");

    return 0;
}