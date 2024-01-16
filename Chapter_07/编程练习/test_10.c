//1988年的美国联邦税收计划是近代最简单的税收方案.它分为4个类别.每个类别有两个等级.下面是该税收计划的摘要.(美元数为应征税的收入)
//单身:17850美元按15%计,超出部分按28%计         户主:23900美元按15%计,超出部分按28%
//已婚,共有:29750美元按15%计                    已婚,离异:14875美元按15%计,超出部分按28%计
//例如,一位工资为20000美元的单身纳税人,应缴纳税费0.15*17850+0.28*(20000-17850)美元
//编写一个程序,让用户指定缴纳税金的种类和应纳税收入,容纳后计算税金.程序应通过循环让用户可以多次输入
#include <stdio.h>

double count();//计算税金
double inputMoney(void);//输入金额
#define FIRST 0.15//缴税第一段
#define SECOND 0.28//缴税第二段
int main(void)
{

    double salary;//工资
    char ch;
    printf("*******************************\n");
    printf("请选择缴纳税金的种类\n");
    printf("a.单身         b.户主\n");
    printf("c.已婚,共有     d.已婚,离异\n");
    printf("q.quit\n");
    printf("*******************************\n");
    while((ch=getchar())!='q')
    {
        switch(ch)
        {
            case 'a':
                salary=inputMoney();
                if(salary<=17850)
                {
                    salary*=FIRST;
                }
                else
                {
                    salary=17850*FIRST+(salary-17850)*SECOND;
                }
                break;
            case 'b':
                salary=inputMoney();
                if(salary<=23900)
                {
                    salary*=FIRST;
                }
                else
                {
                    salary=23900*FIRST+(salary-23900)*SECOND;
                }
                break;
            case 'c':
                salary=inputMoney();
                if(salary<=29750)
                {
                    salary*=FIRST;
                }
                else
                {
                    salary=29750*FIRST+(salary-29750)*SECOND;
                }
                break;
            case 'd':
                salary=inputMoney();
                if(salary<=14875)
                {
                    salary*=FIRST;
                }
                else
                {
                    salary=14875*FIRST+(salary-14875)*SECOND;
                }
                break;
            default:
                printf("输入有误,请重新输入\n");
                //处理输入vfs输出多个:输入有误...
                while(getchar()!='\n')
                {
                    continue;
                }
                ch=getchar();
                continue;
        }
        printf("您要缴纳的税金是%.2lf\n",salary);
        salary=0;
        //处理'\n'字符
        while(getchar()!='\n')
        {
            continue;
        }
        //第二遍输出
        printf("*******************************\n");
        printf("请选择缴纳税金的种类\n");
        printf("a.单身         b.户主\n");
        printf("c.已婚,共有     d.已婚,离异\n");
        printf("q.quit\n");
        printf("*******************************\n");
    }
    printf("Done!\n");

    return 0;
}
double inputMoney()
{
    //防止输入asdasda情况,导致无限循环
    while(getchar()!='\n')
    {
            continue;
    }
    double money;
    printf("请输入你的工资\n");
    scanf("%lf",&money);
    while(money<=0)
    {
        printf("您的输入有误,必须大于0");
    }

    return money;
}