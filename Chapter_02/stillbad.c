//stillbad.c ---- 修复了语法错误的程序
#include <stdio.h>

int main(void)
{
    int n,n2,n3;

    //有一个语义错误,已修正
    n=5;
    n2=n*n;
    n3=n*n*n;
    printf("n=%d,n squared=%d,n cibed =%d\n",n,n2,n3);

    return 0;
}