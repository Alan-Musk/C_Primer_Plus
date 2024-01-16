//编写一个程序,提示用户输入身高(单位:英寸)和姓名,然后以下面的格式显示用户刚输入的信息:
//Dabney,you are 6.208 feet tall
#include <stdio.h>

int main(void)
{
    char name[40];
    float tall;
    printf("请输入你的身高和姓名:");
    scanf("%f %s",&tall,name);

    printf("%s,you are %1.3f feet tall\n",name,tall);

    return 0;

}