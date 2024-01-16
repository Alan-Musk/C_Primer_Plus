//编写一个程序,提示用户输入名字,并执行以下操作
//a.打印名字包括双引号
//b.在宽度为20的字段右端打印名字,包括双引号
//c.在宽度为20的字段左端打印名字,包括双引号
//d.在比姓名宽度宽3的字段中打印名字
#include <stdio.h>

int main(void)
{
    char name[40];
    int width;

    printf("请输入你的名字:");
    scanf("%s",name);
    width=printf("\"%s\"",name);
    printf("a.\"%s\"\n",name);
    printf("b.\"%20s\"\n",name);
    printf("c.\"%-20s\"\n",name);
    printf("d.\"%*s\"\n",width,name);

    return 0;

}