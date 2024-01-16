//编写一个程序,提示用户输入名和姓,然后以 "名,姓" 的格式打印出来
#include <stdio.h>

int main(void)
{
    char firstName[40];
    char lastName[40];
    printf("请输入你的名和姓:");
    scanf("%s %s",firstName,lastName);

    printf("%s,%s\n",firstName,lastName);

    return 0;
}