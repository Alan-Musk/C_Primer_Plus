// 设计一个函数chline(ch,i,j),打印指定的字符j行i列.在一个简单的驱动程序中测试该函数
#include <stdio.h>

void chline(char ch, int i, int j);

int main(void) {
    char ch;
    int i, j;

    printf("请输入要打印的字符: ");
    scanf("%c", &ch);
    printf("请输入开始和结束的列数（例如 3 7）: ");
    scanf("%d %d", &i, &j);

    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j) {
    for (int col = 1; col < i; col++) {
        printf(" "); // 在打印字符之前打印空格，直到达到开始列
    }
    for (int col = i; col <= j; col++) {
        printf("%c", ch); // 从开始列到结束列打印字符
    }
    printf("\n");
}

