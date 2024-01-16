//编写一个程序,要求用户输入一个华氏温度.程序应读取double类型的值作为温度值,并把该值作为一个阐述传递给一个用户自定义的函数Temperatures().
//该函数计算摄氏温度和开氏温度,并以小数点后面两位数字的精度显示3种温度,要用不同的温标来表示这3个温度值.
//华氏温度转换成摄氏温度的公式:摄氏温度=5.0/9.0*(华氏温度-32)
//开氏温度常用于科学研究,0表示绝对零,代表最低温度,下面是摄氏度温度转为开氏温度的公式: 开氏温度=摄氏温度+273.16
//Temperatures()函数中用const创建温度转换中使用的变量.在main()函数中使用一个循环让用户重复输入温度,当用户输入q或其他非数字时,循环结束.
//scanf()函数返回读取数据的数量,所以如果读取数字则返回1,如果读取q则不返回1,可以使用==运算符将scanf()的返回值与1作比较,测试是否相当
#include <stdio.h>
const double DEGREE=273.16;
void Temperatures();

int main(void)
{
    double degreeH;
    printf("请输入要转换的华氏温度:");
    while(scanf("%lf",&degreeH)==1)
    {
        Temperatures(degreeH);
        printf("输入q或其他非数字时,循环结束.\n");
    }

    return 0;

}

void Temperatures(double degreeH)
{

    double degreeS,degreeK;//摄氏度,开氏度
    degreeS=5.0/9.0*(degreeH-32.0);
    degreeK=degreeS+DEGREE;

    printf("华氏温度:%.2f\n摄氏温度:%.2f\n开氏温度:%.2f\n",degreeH,degreeS,degreeK);
}