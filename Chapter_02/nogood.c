//nogood.c --有错误的程序
#include <stdio.h>

int main(void){
    int n,n2,n3;

    //有多处错误
    n=5;
    n2=n*n;
    n3=n*n*n;

    printf("n1=%d,n2=%d,n3=%d.",n,n2,n3);

    return 0;
}