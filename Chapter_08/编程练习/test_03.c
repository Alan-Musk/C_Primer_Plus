//编写一个程序,在遇到EOF之前,把输入作为字符流读取.该程序要报告输入中的大写字母和小写字母的个数.假设大小写字母数值是连续的.或者使用ctype.h库中的合适的分类函数更方便
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int big=0,small=0;//大写字母,小写字母
    while(scanf("%c",&ch)!=EOF)
    {

        if(isupper(ch))
        {
            big++;
        }
        else if(islower(ch))
        {
            small++;
        }
    }
    printf("大写字母有:%d,小写字母有%d\n",big,small);

    return 0;
}