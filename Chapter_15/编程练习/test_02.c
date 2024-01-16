// 编写一个程序,通过命令行参数读取两个二进制字符串,对这两个二进制数使用~运算符,&运算符,|运算符和^运算符
// 并以二进制字符串形式打印结果
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define SIZE 32
int bstoi(char * st);
char * itobs(int n,char *ps);
int main(int argc,char * argv[])
{
    if(argc!=3)
    {
        printf("输入参数不正确.\n");
        exit(EXIT_FAILURE);
    }
    char bs[SIZE];
    int result=0;
    //按位取反
    result=(~bstoi(argv[1]));
    itobs(result,bs);
    printf("~%s result is :%s\n",argv[1],bs);
    result=(~bstoi(argv[2]));
    itobs(result,bs);
    printf("~%s result is :%s\n",argv[2],bs);
    //位与操作
    result=(bstoi(argv[1])&bstoi(argv[2]));
    itobs(result,bs);
    printf("%s by %s result is : %s\n",argv[1],argv[2],bs);
    //位或操作
    result=(bstoi(argv[1])^bstoi(argv[2]));
    itobs(result,bs);
    printf("%s ^ %s result is : %s\n",argv[1],argv[2],bs);
    return 0;
}
char * itobs(int n,char *ps)
{
    //将整数转换成字符串输出
    int i;
    // CHAR_BIT宏表示char中的位数,size表示int类型的位数
    const static int size=CHAR_BIT*sizeof(int);
    for(i=size-1;i>=0;i--,n>>=1)
    {
        ps[i]=(01&n)+'0';
    }
    ps[size]='\0';
    return ps;
}
int bstoi(char * st)
{
    int sum=0;
    while(*st!='\0')
    {
        sum*=2;
        sum+=*st++- '0';
    }
    return sum;
}