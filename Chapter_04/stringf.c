//stringf.c -- 字符串格式
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void)
{
    printf("{%2s}\n",BLURB);
    printf("{%24s}\n",BLURB);
    printf("{%24.5s}\n",BLURB); //.5指打印最好字符数位5
    printf("{%-24.5s}\n",BLURB);

    //学以致用
    char name[40]={"Alan"};
    float cash=54.3;
    printf("The %s family just may be $%.2f dollars richer!\n",name,cash);

    return 0;
}