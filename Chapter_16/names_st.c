// names_st.c -- 定义names_st.h中的函数
#include <stdio.h>
#include "names_st.h"   //包含头文件
//函数定义
void get_names(names * pn)
{
    printf("Please enter your first name:");
    s_gets(pn->first,SLEN);
    printf("Please enter your last name:");
    s_gets(pn->last,SLEN);
}
void show_names(const names * pn)
{
    printf("%s %s",pn->first,pn->last);
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
            while(getchar()!='\0')
            {
                continue;
            }
        }
    }
    return ret_val;
}
