// 编写一个通过命令行运行的程序计数幂.第一个命令行参数是double类型的数,作为幂的底数,第二个参数是整数,作为幂的指数
// atoi()将字符串转换为整数或浮点
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
    if(argc!=3)
    {
        printf("输入有误.");
        return 0;
    }
    float f=atof(argv[1]);
    int i=atoi(argv[2]);
    double sum=1;
    for(int k=0;k<i;k++)
    {
        sum=sum*f;
    }
    printf("The %g's %d power is %g\n",f,i,sum);
    return 0;
}