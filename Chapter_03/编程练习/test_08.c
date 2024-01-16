#include <stdio.h>

int main(void)
{
    float cups=0.0;


    printf("你有几杯液体");
    scanf("%f",&cups);

    printf("你有%.1f品脱或%.1f杯或%.1f盎司或%.1f大汤勺或%.1f茶勺",cups/2,cups,cups*8,cups*8*2,cups*8*2*3);
    //总结,在只有一杯水的时候,会产生半品脱的情况
    return 0;

}