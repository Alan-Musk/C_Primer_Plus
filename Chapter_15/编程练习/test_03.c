// 编写一个函数,接受一个int类型的参数,并返回该参数的中打开位的数量.在一个程序中测试该函数
#include <stdio.h>
#include <limits.h>
int itobs(int);

int main(void)
{
    int num;
    printf("请输入一个数字:");
    scanf("%d",&num);
    printf("打开的位数是%d\n",itobs(num));
    return 0;
}

int itobs(int num)
{
    int sum=0;//打开位的总数
    char st[32];//字符串
    int i;
    const static int size=CHAR_BIT*sizeof(int);
    for(i=size-1;i>=0;i--,num>>=1)
    {
        st[i]=(01&num)+'0';
        if(st[i]=='1')
        {
            sum++;
        }
    }
    st[i]='\0';
    return sum;
}