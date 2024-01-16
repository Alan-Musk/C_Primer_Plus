// Please choose one of the following:
// 1) copy files           2) move files
// 3) remove files         4) quit
// Enter the number of your choice:
// a.编写一个函数,显示一份有4个选项的菜单,提示用户进行选择(输出入上所示).
// b.编写一个函数,接受两个int类型的参数分别表示上限和下限.该函数从用户的输入中读取整数,如果整数超过规定上下限,函数再次打印菜单(使用a部分的函数)提示用户输入,然后获取一个新值.
// 如果用户输入的整数在规定范围内,该函数则把该整数返回主调函数,如果用户输入一个非整数字符,该函数应返回4
#include <stdio.h>
void show_menu(void);//a
int border(int upper,int lower);//b

int main(void)
{
    int choice;
    show_menu();
    while((choice=border(1,4))!=4)
    {
        printf("我的选择是:%d",choice);
        show_menu();
    }

    return 0;

}
//a.
void show_menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files           2) move files\n");
    printf("3) remove files         4) quit\n");
    printf("Enter the number of your choice:\n");
}
//b
int border(int upper,int lower)
{
    int num;
    int input;
    input=scanf("%d",&num);
    while(input==1)
    {
        if(num>upper||num<lower)
        {
            printf("该数已超过边界");
            show_menu();
            input=scanf("%d",&num);
            continue;
        }
        break;
    }
    if(input!=1)
    {
        num=4;
    }

    return num;

}