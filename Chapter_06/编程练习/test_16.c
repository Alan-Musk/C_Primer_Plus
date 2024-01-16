// Dephne以10%的单利息投资了100美元(也就是说,每年的投资获利是原始资本的10%).Deirdre以5%的复合利息投资了100美元(也就说,利息是当前余额的5%,包含之前的利息)
//编写一个程序,计算需要多少年Deirdre的投资额才会超过Daphne,并显示那时两人的余额;
#include <stdio.h>
#define DEPHNE 0.1
#define DEIRDRE 1.05

int main(void)
{
    float sumDh=100.0,sumDd=100.0;  //Dephne,Deirdre的总和投资额
    int years=1;

    do
    {
        sumDh=100*DEPHNE+sumDh;
        sumDd=sumDd*DEIRDRE;
        years++;
    }while(sumDd<=sumDh);

    printf("在第%d年时Deirdre的投资额:%.2f超过Daphne的投资额:%.2f\n",years,sumDd,sumDh);

    return 0;
}