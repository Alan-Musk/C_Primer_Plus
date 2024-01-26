//编写一个程序,在遇到EOF之前,把输入作为字符流读取.该程序要报告平均每个单词的字母数.不要把空白统计为单词的字母.

#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    int letters=0;// 字母数
    int words=0;    // 单词数
    int inWord=0; // 是否在单词中的标志
    while((ch=getchar())!=EOF){
        if(isalpha(ch)){            // 如果是字母
            letters++;//    增加字母计数
            if(!inWord){
                inWord=1;   // 标记现在在单词中
                words++;    // 增加单词计数
            }
        }else if(inWord){
            // 如果不是字母且在单词中,则标记不在单词中
            inWord=0;
        }
    }
    if (words > 0) {
        printf("平均每个单词的字母数是：%.2f\n", (double)letters / words);
    } else {
        printf("没有输入单词。\n");
    }
}
