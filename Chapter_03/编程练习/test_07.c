#include <stdio.h>
#define TRANSFORM 2.54
int main(void)
{
    float inchs=0;
    printf("请输入你的身高(英寸):");
    scanf("%f",&inchs);

    printf("你的身高是:%.1f英寸或者%.2f厘米\n",inchs,inchs*TRANSFORM);

    return 0;
}