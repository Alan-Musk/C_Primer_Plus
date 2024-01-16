// 设计一个函数,接受一个指向字符串的指针,返回指向该字符串第一个空格字符的指针,或如果未找到空格字符,就返回空指针
char * strblank(char * st)
{
    while(*st!='\0'&&*st!=' ')
    {
        *st++;
    }
    if(*st=='\0')
    {
        return NULL;
    }
    else
    {
        return st;
    }
}
//另一种实现
char * strblank1(const char *st)
{
    while(*st!='\0'&&*st!=' ')
    {
        st++;
    }
    if(*st=='\0')
    {
        return NULL;
    }
    else
    {
        return (char *)st;
    }
}