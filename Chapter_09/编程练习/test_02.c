// 设计一个函数chline(ch,i,j),打印指定的字符j行i列.在一个简单的驱动程序中测试该函数
#include <stdio.h>

void chline(char ch,int i,int j);

int main(void)
{
    char ch;
    int rows,cols;
    printf("请输入要打印的字符:");
    scanf("%c",&ch);
    printf("请输入要打印的行和列");
    scanf("%d %d",&rows,&cols);
    chline(ch,rows,cols);

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