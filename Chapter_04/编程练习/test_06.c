//编写一个程序,先提示用户输入名,然后提示用户输入姓.
//在一行打印用户输入的名和姓,下一行分别打印名和姓的字母.字母数要与对应名和姓的结尾对齐.如下所示
//Melissa Honeybee
//      7       8
//接下来,再打印相同的信息,但是字母个数与相应名和姓的开头对齐,如下所示
//Melissa Honeybee
// 7       8
#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[40];
    char lastName[40];
    int num1,num2;
    int length1,length2;

    printf("请输入你的名:");
    scanf("%s",firstName);
    printf("请输入你的姓:");
    scanf("%s",lastName);

    //获取长度
    length1=strlen(firstName);
    length2=strlen(lastName);

    num1=printf("%s ",firstName);
    num2=printf("%s\n",lastName);
    printf("%*d",(num1-1),length1);
    printf("%*d\n",num2,length2);

    printf("%s ",firstName);
    printf("%s\n",lastName);
    printf("%-*d",num1,length1);
    printf("%-*d\n",num2,length2);
}
