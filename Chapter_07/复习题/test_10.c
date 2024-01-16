//重写复习题9,但这次不要使用continue和goto语句
//注:程序有瑕疵,开始理解有点问题,后面发现中文解析上无法做到连续,而是直接退出,故,我的选择是-----我的更好
#include <stdio.h>

int main(void)
{
    char ch;

    while((ch=getchar())!='#')
    {
        if(ch='\n')
        {
            ch=getchar();
        }
        printf("Step 1\n");
        switch (ch)
        {
            case 'c':
                break;
            case 'b':
                break;
            case 'h':
                printf("Step 3\n");
                break;
        }
        printf("Step 2\n");
    }
    printf("Done!\n");
    return 0;
}