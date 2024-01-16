//编写一个程序,在遇到EOF之前,把输入作为字符流读取.该程序要报告平均每个单词的字母数.不要把空白统计为单词的字母.
//实际上,标点符号也不应该统计,但是现在暂时不用考虑这么多(如果你在意,考虑使用ctype.h中ispunct()函数)
// 读者的代码更胜一筹,考虑到最后以字母结尾的情况.例如Hello,My name is alan

#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int words=0,letters=0;//单词数和字母数
    int isWord=0;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        //获取字母总数
        if((!ispunct(ch))&&(!isblank(ch)))
        {
            letters++;
            isWord++;
            if(isWord==1)
            {
                words++;
            }
        }
        else
        {
            isWord=0;
        }

    }
    printf("单词数是%d 字母数是%d\n",words,letters);

    return 0;
}