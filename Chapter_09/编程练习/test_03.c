// 编写一个函数,接受是三个参数:一个字符和两个整数.字符参数是待打印的字符,
// 第一个整数指定一行中打印字符的次数,第二个整数指定打印指定字符的行数,编写一个调用该函数的程序
// 读者发问,这和第二题有什么区别
#include <stdio.h>

void chline(char ch,int i,int j);

int main(void)
{
    char ch;
    int rows,cols;
    printf("请输入要打印的字符:");
    scanf("%c",&ch);
    printf("请输入要打印的次数和行");
    scanf("%d %d",&rows,&cols);
    chline(ch,cols,rows);

    return 0;
}

void chline(char ch,int i,int j)
{
    int row,cols;
    for(row=0;row<i;row++)
    {
        for(cols=0;cols<j;cols++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}