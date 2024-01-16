#include <stdio.h>
void jolly(void);//定义输出函数
void deny(void);//定义输出函数
int main(void)
{

   jolly();
   jolly();
   jolly();
   deny();

    return 0;
}
void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
     printf("which nobody can deny!\n");
}
