// getsputs.c -- 使用gets()和puts()
// 读者的编辑器不支持
#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];

    puts("Enter a string,please.");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n",words);
    puts(words);
    puts("Done.");

    return 0;
}