// 编写一个程序,提示用户输入大写数字.使用嵌套循环以下面金字塔的格式打印字母:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include <stdio.h>
// Alan's answer
int main(void)
{
    char input;
    int i,j;
    char letter='A';
    printf("请输入大写字母:");
    scanf("%c",&input);

    for(i=0;i<=(int)(input-'A');i++)
    {
        letter='A';
        //输出空格
        for(j=(int)(input-'A');j>=i;j--)
        {
            printf(" ");
        }
        //输出字母分界线前部分包含字母
        for(j=(int)'A';j<=(int)'A'+i;j++)
        {
            printf("%c",j);
            letter++;
        }
        letter-=2;
        //输出后部分
        for(j=0;j<i;j++)
        {
            printf("%c",letter);
            letter--;
        }
        printf("\n");
    }
    return 0;
}
//标准答案
int main(void)
{
    int i,j,num;
    char c;

    printf("Enter the core char you want to print(A...Z):");
    scanf("%c",&c);
    char ch='A';
    num=c-'A'+1;
    //输入字符的ASCII码减去'A'加1得到十进制结果num
    //num即是需要打印的从A开始的字符数,也是打印的总行数
    for(i=1;i<=num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            printf(" ");
        }
        //打印空格,空格数为总字符数减去当前应打印的字符数
        for(ch='A';j<num;j++)
        {
            printf("%c",ch++);
        }
        //在打印正序字符数时,需要通过ch做递增操作,起始值j在空格已经通过循环
        //做了初始化,因此只需要打印剩余字符数
        for(j=1,ch-=2;j<i;j++,ch--)
        {
            printf("%c",ch);
        }
        //在打印逆序字符时,字符做递减操作
        printf("\n");
    }
    return 0;
}