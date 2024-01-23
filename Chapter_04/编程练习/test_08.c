//编写一个程序,提示用户输入旅行的历程和消耗的汽油量.然后计算并显示消耗每加仑汽油行驶的英里数,显示小数点后面一位数字
//接下里,使用一加仑大概3.785升,1英里大概为1.609km,把单位是英里/加仑的值转换为升/100公里(欧洲通用的燃料消耗表示法),并显示结果,显示小数点后面一位数字
//注意,美国采用的方案测量消耗单位燃料的行驶(值越大越好),而欧洲则采用单位距离消耗的燃料测量方案,值越小越好.使用#define 创建符号常量或使用const限定符创建变量来表示两个转换系数
#include <stdio.h>
#define MILES 1.609
#define GALLON 3.785

int main(void)
{
    float miles,gas;
    float volume,km;
    printf("请输入你的旅行的历程和消耗的汽油量:");
    scanf("%f %f",&miles,&gas);
    printf("您的每加仑汽油行驶的英里数为:%.1f\n",miles/gas);

    // 将每加仑汽油英里数转换为每升汽油行驶的公里数
    float km_per_liter=(miles/gas)*(MILES/GALLON);
    printf("您的汽车每100公里消耗%.1f升汽油\n",100/km_per_liter);

    return 0;
}
