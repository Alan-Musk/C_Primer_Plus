// struct gas{ float distance;float gals;float mpg;};
// a.设计一个函数,接受struct gas类型的参数,假设传入的结构包含distance和gals信息,该函数为mpg成员计算正确的值,并把值返回该结构
// b.设计一个函数,接受struct gas类型的参数,假设传入的结构包含distance和gals信息,该函数为mpg成员计算正确的值,并把该值赋给合适的成员
#include <stdio.h>

struct gas{
    float distance;
    float gals;
    float mpg;
};

void aFun(struct gas *);

int main(void)
{
    struct gas a={100,4,0.0};
    aFun(&a);
    printf("mpg是:%.1f\n",a.mpg);
    return 0;
}


void aFun(struct gas * function)
{
    function->mpg=function->distance/function->gals;
}