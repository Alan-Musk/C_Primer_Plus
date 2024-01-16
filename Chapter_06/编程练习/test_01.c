//编写一个程序,创建一个包含26个元素的数组,并在其中存储26个小写字母,然后打印数组的所有内容
#include <stdio.h>

int main(void)
{
    char letters[26];
    int i;
    char element='a';//i 循环数 element 小写字母
    //存入
    for(i=0;i<26;i++)
    {
        letters[i]=element++;
    }
    //输出
    for(i=0;i<26;i++)
    {
        printf("%-5c",letters[i]);
    }
    return 0;
}