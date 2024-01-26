//编写一个程序,在遇到EOF之前,把输入作为字符流读取.程序要打印每个输入的字母以及其对应的ASCII十进制值.
//注意,在ASCII序列中,空格字符前面的字符都是非打印字符,要特殊处理这些字符,如果非打印字符时换行符或制表符,则分别打印\n或\t
//否则,使用控制字符表示法.例如,ASCII的1是Ctrl+A,可显示为^A.注意A的ASCII的值是Ctrl+A的值加上64.其他非打印字符也有类似的关系
//除每次遇到换行符打印新的一行以外,每行打印10对值.(这他妈在说什么!)

#include <stdio.h>

int main(void)
{
    int num=0;
    char ch;

    while((ch=getchar())!=EOF)
    {
        if(num++==10)
        {
            printf("\n");
            num=1;
        }//输入计数器,是否打印换行符
        if(ch>=' ')//大于空格作为显示字符表示
        {
            printf("\'%c\'--%-5d",ch,ch);
        }
        else if(ch=='\n')//处理换行符
        {
            printf("\\n--\\n\n");
            num=0;
        }
        else if(ch=='\t')
        {
            printf("\\t--\\t\n");//制表符处理
        }
        else
        {
            printf("\'%c\'--^%c",ch,(ch+64));
        }
    }

    return 0;
}
