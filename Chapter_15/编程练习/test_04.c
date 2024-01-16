// 编写一个函数,接受两个int类型的参数,一个是值,一个是位的位置,如果指定位的位置是1,该函数返回1,否则返回0,在一个程序中测试该函数
#include <stdio.h>
#include <limits.h>
int test(int,int);

int main(void)
{
    int num;
    int address;
    printf("请输入一个数字,以及位的位置.");
    scanf("%d %d",&num,&address);
    if(test(num,address))
    {
        printf("\n");
        printf("该位置为1\n");
    }
    else
    {
        printf("\n该位置为0\n");
    }
}

int test(int num,int address)
{
    char st[32];
    const static int size=CHAR_BIT*sizeof(int);
    for(int i=size-2;i>=0;i--,num>>=1)
    {
        st[i]=(01&num)+'0';
    }
    st[31]='\0';
    for(int i=0;i<size;i++)
    {
        printf("%c",st[i]);
    }

    return st[size-address-1]=='1' ? 1 : 0;
}