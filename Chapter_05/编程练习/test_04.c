//编写一个程序,提示用户输入一个身高(单位:厘米),并分别以厘米和英尺,英寸为单位显示该值,允许有小数部分
//程序应该能让用户重复输入身高,知道用户输入一个非正值,其输出示例如下:
//Enter a height in centimeters:182
//182.0 cm=5 feet, 11.7 inches
//Enter a height in centimeters (<=0 to quit):168.7
//168.7 cm =5 feet,6.4 inches
//Enter a height in centimeters (<=0 to quit):0
//bye
#include <stdio.h>
#define CM_IC 2.54  //一英寸等于2.54cm
#define IC_FT 12.0    //一英尺等于12英寸

int main(void)
{
    float cm,ic;

    printf("Enter a height in centimeters:");
    scanf("%f",&cm);
    while(cm>0)
    {
        ic=cm/CM_IC;
        printf("%.1f cm = %d feet, %.1f inches\n",cm,(int)(ic/IC_FT),ic-(int)(ic/IC_FT)*IC_FT);
        printf("Enter a height in centimeters (<=0 to quit):");
        scanf("%f",&cm);
    }
    printf("bye\n");

    return 0;
}