// string1.c
#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt1="Something is pointing at me.";//复习:不能通过pt1改变字符串,本程序中即锁定常量
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8]='8';
    puts(words);

    return 0;
}