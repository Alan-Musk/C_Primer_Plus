// 重新设计编程练习2,要求只使用自动变量.该程序提供的用户界面不变,即提示用户输入模式等.但是,函数调用要作相应变化
#include <stdio.h>
#include "test_03.h"
int main(void)
{
    int mode=0;
    double tot;
    printf("Enter 0 for metric mode,1 for US mode:");
    scanf("%d",&mode);
    while(mode>=0)
    {
        mode=set_mode(mode);
        tot=get_info(mode);
        show_info(mode,tot);
        printf("Enter 0 for metric mode,1 for US mode");
        printf("(-1 to quit):");
        scanf("%d",&mode);
    }
    printf("Done!\n");
    return 0;
}