//Rabnud 博士加入了一个社交圈.起初他有5个朋友.他注意到他的朋友以下面的方式增长.
//第一周减少一个朋友,剩下的朋友翻倍;第二周减少两个朋友,剩下的朋友翻倍.一般而言,第N周减少N个朋友,剩下的朋友翻倍
//编写一个程序,计算并显示Rabund博士每周朋友数量,该程序一直运行,直到超过邓巴数Dunbar's number,邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值,大约是150

#include <stdio.h>
int count(int num);

int main(void)
{
    int friends,weeks;

    for(weeks=1,friends=5;friends<=150;weeks++)
    {
        friends=count(friends-weeks);
        printf("第%d周,Rabund博士的朋友数量是:%d\n",weeks,friends);
    }

    return 0;
}

int count(int num)
{
    num*=2;

    return num;
}