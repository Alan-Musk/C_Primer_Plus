//编写一个程序,读取一行输入,然后把输入的内容倒序打印出来,可以把输入存储在char类型的数组中
//假设每行字符不超过255.回忆一下,根据%c转换说明,scanf()函数一次只能从输入中读取一个字符,而且在用户按下Enter建时scanf()函数会生成一个换行字符\n

#include <stdio.h>

int main(void)
{
    char letters[255];
    int i=0,k;
    char in; // 读取的字符
    printf("请输入一串字符:");
    while(1){
        scanf("%c",&in);
        if(i==254 || in=='\n'){
            break;
        }
        letters[i]=in;
        i++;
    }
    for(k=i-1;k>=0;k--)
    {
        printf("%c",letters[k]);
    }
    printf("\n");
    return 0;
}
