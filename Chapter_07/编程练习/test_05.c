//用switch重写练习4
#include <stdio.h>

int main(void)
{
    int times=0;
    char ch;

    while((ch=getchar())!='#')
    {
        switch (ch)
        {
            case '.':
                putchar('!');
                times++;
                break;
            case '!':
                putchar(ch);
                putchar(ch);
                times++;
                break;
            default:
                putchar(ch);
        }
    }
    printf("Done!\n");

    return 0;
}