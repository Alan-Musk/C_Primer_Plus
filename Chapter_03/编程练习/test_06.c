#include <stdio.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950
int main(void)
{
    //sometimes 6.5夸脱
    float quarts=0.0;
    printf("请输入夸脱数:");
    scanf("%f",&quarts);

    printf("%.1f夸脱有%e水分子\n",quarts,quarts*MASS_PER_QUART/MASS_PER_MOLE);

    return 0;
}