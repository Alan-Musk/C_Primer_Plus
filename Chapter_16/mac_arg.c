// mac_arg.c -- 带参数的宏
#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n",X);
int main(void)
{
    int x=5;
    int z;
    printf("X=%d\n",x);
    z=SQUARE(x);
    printf("Evaluating SQUARE(x):");
    PR(x);
    z=SQUARE(2);
    printf("Evaluationg SQUARE(2):");
    PR(z);
    printf("Evaluationg SQUARE(x+2):");
    PR(SQUARE(x+2))
    printf("Evaluationg 100/SQUARE(2):");
    PR(100/SQUARE(2));
    printf("x is %d.\n",x);
    printf("Evaluationg SQUARE(++x):");
    PR(SQUARE(++x));
    printf("After incrementing,x is %x.\n",x);
    return 0;
}