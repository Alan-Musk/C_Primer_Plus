//考虑下面两个无限序列:
//编写一个程序计算这两个无限序列的总和,直到到达某次数.提示:奇数个-1相乘得-1,偶数个-1相乘得1.让用户输入指定的次数
//当用户输入0或负值时结束输入.查看运行100项,1000项,10000项后的总和,是否发现每个序列都收敛

#include <stdio.h>

int main(void)
{
    int length;
    double sum=0.0;
    printf("Enter the limit length:");
    scanf("%d",&length);
    while(length>0)
    {
        sum=0.0;
        for(int i=1;i<=length;i++)
        {
            sum=sum+1.0/i;
        }
        //计算1+1/2+1/3+....
        printf("The sum of 1.0+...+1.0/%d.0 is %lf\n",length,sum);

        sum=0.0;
        for(int i=1;i<=length;i++)
        {
            if(i%2==0)
            {
                sum=sum-1.0/i;
            }
            else
            {
                sum=sum+1.0/i;
            }
        }
        //计算1-1/2+1+1/3-1/4+...
        printf("The sum for 1.0-..+1.0/%d.0 is %lf\n",length,sum);

        sum=0;
        for(int i=1;i<=length;i++)
        {
            if(i%2!=0)
            {
                sum=sum+2*1.0/i;
            }
        }
        printf("The sum for 1.0+1.0+2.0/3.0+...+2.0/%d.0 is %lf\n",length,sum);

        printf("Enter the limit length: ");
        scanf("%d",&length);
    }
    printf("\nDone!\n");
    return 0;
}