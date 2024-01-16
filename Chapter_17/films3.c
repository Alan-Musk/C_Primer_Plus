// films3.c -- 使用抽象数据类型(ADT)风格的链表
// 与list.c 一起编译
#include <stdio.h>
#include <stdlib.h> //提供exit()的原型
#include "list.h"   //定义List,Item
void showmovies(Item item);
char * s_gets(char * st,int n);

int main(void)
{
    List movies;
    Item temp;
    //初始化
    InitializeList(&movies);
    if(ListIsFull(&movies))
    {
        fprintf(stderr,"No memory available!Bye!\n");
        exit(1);
    }

    //获取用户输入并存储
    puts("Enter first moive title:");
    while(s_gets(temp.title,TSIZE)!=NULL&&temp.title[0]!='\0')
    {
        puts("Enter your rating <0-10>:");
        scanf("%d",&temp.rating);
        while(getchar()!='\0')
        {
            continue;
        }
        if(AddItem(temp,&movies)==false)
        {
            fprintf(stderr,"Problem allocating memory\n");
            break;
        }
        if(ListIsFull(&movies))
        {
            puts("The list is now full.");
            break;
        }
        puts("Enter next movies title(empty line to stop):");
    }

    //显示
    if(ListIsEmpty(&movies))
    {
        printf("No data entered. ");
    }
    else
    {
        printf("Here is the movies list:\n");
        Traverse(&movies,showmovies);
    }
    printf("You entered %d moives.\n",ListItemCount(&movies));

    //清理
    EmptyTheList(&movies);
    printf("Bye!\n");
    return 0;
}
void showmovies(Item item)
{
    printf("Movies:%s Rating: %d\n",item.title,item.rating);
}


char * s_gets(char * st,int n)
{
    char * ret_val;
    char * find;
    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        find=strchr(st,'\n');
        if(find)
        {
            *find='\0';
        }
        else
        {
            while(getchar()!='\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}