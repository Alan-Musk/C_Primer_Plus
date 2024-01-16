// 编写一个程序,读取输入,直到读到EOF,报告读入的单词数,大写字母数,小写字母数,标点符号数和数字字符.使用ctype.h头文件中的函数
#include <stdio.h>
#include <ctype.h>
#define SIZE 100
int main(void)
{
    int upper=0,lower=0,number=0,words=0,punct=0;
    int isword=0;
    char st[SIZE];
    fgets(st,SIZE,stdin);
    char * point=st;
    while(*point!='\0')
    {
        if(ispunct(*point))
        {
            punct++;
        }
        else if(isdigit(*point))
        {
            number++;
        }
        else if(islower(*point))
        {
            lower++;
        }
        else if(isupper(*point))
        {
            upper++;
        }
        if((!ispunct(*point))&&(!isblank(*point)))
        {
            isword++;
            if(isword==1)
            {
                words++;
            }
        }
        else
        {
            isword=0;
        }
        point++;
    }
    printf("单词数有:%d\n大写字母数有:%d\n小写字母数有:%d\n标点符号数有:%d\n数字字符有:%d\n",words,upper,lower,punct,number);

    return 0;
}