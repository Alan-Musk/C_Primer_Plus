// 编写一个程序,读取10个字符串或者读到EOF时停止.该程序为用户提供一个有5个选项的菜单:
// 打印源字符串列表,以ASCII中的顺序打印字符串,按长度递增顺序打印字符串,按字符串中第一个单词的长度打印字符串,退出
// 菜单可以循环显示,除非用户选择退出选项.当然,该程序要能真正的完成菜单中各选项的功能
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
#define NUM 3
char show_menu(void);//展示菜单
void clean(void);//清除缓存
void loop(char st[NUM][SIZE]);//a.打印源字符串列表
void sort_ASC(char st[NUM][SIZE]);//b.以ASCII中的顺序打印字符串
void sort_length(char st[NUM][SIZE]);//c.按长度递增顺序打印字符串
void sort_world(char st[NUM][SIZE]);//d.按单词长度递增顺序打印字符串
int get_word_length(char * input);//获取第一个字符串长度
int main(void)
{
    int num=0;
    char choice;
    char s [NUM][SIZE];
    while(**s!=EOF&&num<NUM)
    {
        fgets(s[num],SIZE,stdin);
        if(*s[num]=='\n')
        {
            continue;
        }
        num++;
    }
    choice=show_menu();
    while(choice!='q')
    {
        switch (choice)
        {
            case 'a':
                loop(s);
                break;
            case 'b':
                sort_ASC(s);
                break;
            case 'c':
                sort_length(s);
                break;
            case 'd':
                sort_world(s);
                break;
            default:
                printf("输入有误,请重新输入:\n");
                scanf("%c",&choice);
                clean();
        }
        choice=show_menu();

    }
    puts("Done!");
    return 0;
}
void sort_world(char st[NUM][SIZE])
{
    char * temp=NULL;
    int num=0;
    int max=NUM;
    char * sort[NUM];
    while(num<NUM)
    {
        sort[num]=&st[num][0];
        num++;
    }
    //排序算法
    while(num=0,num<max)
    {
        while(num+1<max)//防止越界
        {
            temp=sort[num];
            if(get_word_length(sort[num])>get_word_length(sort[num+1]))
            {
                sort[num]=sort[num+1];
                sort[num+1]=temp;
            }
            num++;
        }
        max--;
    }
    //输出
    for(num=0;num<NUM;num++)
    {
        printf("%s",sort[num]);
    }
}
int get_word_length(char * input)
{
    char * in=input;
    int length=0;
    while(isalpha(*in)==0)
    {
        in++;
    }
    while(isalpha(*in)!=0)
    {
        in++;
        length++;
    }
    return length;
}
void sort_length(char st[NUM][SIZE])
{
    char * temp=NULL;
    int num=0;
    int max=NUM;
    char * sort[NUM];
    while(num<NUM)
    {
        sort[num]=&st[num][0];
        num++;
    }
    //排序算法
    while(num=0,num<max)
    {
        while(num+1<max)//防止越界
        {
            temp=sort[num];
            if(strlen(sort[num])>strlen(sort[num+1]))
            {
                sort[num]=sort[num+1];
                sort[num+1]=temp;
            }
            num++;
        }
        max--;
    }
    //输出
    for(num=0;num<NUM;num++)
    {
        printf("%s",sort[num]);
    }
}
void sort_ASC(char st[NUM][SIZE])
{
    char * temp=NULL;
    int num=0;
    int max=NUM;
    char * sort[NUM];
    while(num<NUM)
    {
        sort[num]=&st[num][0];
        num++;
    }
    //排序算法
    while(num=0,num<max)
    {
        while(num+1<max)//防止越界
        {
            temp=sort[num];
            if(sort[num][0]>sort[num+1][0])
            {
                sort[num]=sort[num+1];
                sort[num+1]=temp;
            }
            num++;
        }
        max--;
    }
    //输出
    for(num=0;num<NUM;num++)
    {
        printf("%s",sort[num]);
    }
}
void loop(char st[NUM][SIZE])
{
    int i,j;

    for(i=0;i<NUM;i++)
    {
        printf("%s",st[i]);
    }
}
void clean(void)
{
    while(getchar()!='\n')
    {
        continue;
    }
}
char show_menu(void)
{
    char choice;
    printf("******************\n");
    printf("a.打印源字符串列表         b.以ASCII中的顺序打印字符串\n");
    printf("c.按长度递增顺序打印字符串  d.按字符串中第一个单词的长度打印字符串\n");
    printf("q.退出\n");
    printf("******************\n");
    printf("请输入选项(按q退出)");
    scanf("%c",&choice);
    clean();
    return choice;
}