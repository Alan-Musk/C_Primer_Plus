// 本章定义的s_gets()函数,可以用strchr()函数代替其中的while循环来查找换行符,请改写该函数
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