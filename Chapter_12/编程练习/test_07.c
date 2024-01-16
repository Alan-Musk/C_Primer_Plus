// 编写一个函数,按照程序清单12.13输出示例后面讨论的内容,修改该程序.使其输出类似:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void roll(int num,int sides,int dice);
int main(void)
{
    int dice=0,sides=0;
    int num;
    srand(time(0));
    printf("Enter the number of sets;enter q to stop:");
    while(scanf("%d",&num)==1)
    {
        printf("How many sides and how many dice?");
        scanf("%d %d",&sides,&dice);
        roll(num,sides,dice);
        printf("How many sets?Enter q to stop:");
    }
    return 0;
}

void roll(int num,int sides,int dice)
{
    int nums[sides*dice];
    for(int n=0;n<dice*sides;n++)
    {
        nums[n]=rand()%num+1;
    }
    for(int n=0;n<dice*sides;n++)
    {
        printf(" %d ",nums[n]);
        if(n!=0&&(n+1)%15==0)
        {
            printf("\n");
        }
    }
    printf("\n");
}