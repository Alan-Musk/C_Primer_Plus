//编写一个程序把一个单词(large)读入一个字符数组中,然后到倒序打印这个单词(egral). 提示:strlen()的函数可用于计算数组最后一个字符的下标
#include <stdio.h>
#include <string.h>

int main(void)
{
    char letters[40];
    int i;
    printf("请输入一个单词:");
    scanf("%s",letters);
    for(i=strlen(letters);i>=0;i--)
    {
        printf("%c",letters[i]);
    }
    printf("\n");
    return 0;
}