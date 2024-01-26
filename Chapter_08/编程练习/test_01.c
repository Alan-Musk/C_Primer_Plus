//设计一个程序,统计在读到文件结尾之前读取的字符数

#include <stdio.h>

int main(void)
{
    char ch;
    int char_count=0;
    while((ch=getchar())!=EOF){
        char_count++;   // 对于每个读取的字符进行计数
    }

    printf("读取的字符总数为：%d\n",char_count);

    return 0;
}
