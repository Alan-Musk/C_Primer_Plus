// 编写一个程序,创建一个有两个成员的结构模板:
// a.第一个成员是社会保险号,第2个是一个有3个成员的结构,第一个成员代表名,第二个成员代表中间名,第三个成员表示姓.
// 创建并初始化一个内含5个该类型结构的数组.该程序以下面的格式打印数据: Dribble, Flossie M. -- 302039823
// 如果有中间名,只打印它的第一个字母,后面加一个点(.);如果没有中间名,则不用打印点.编写一个程序进行打印,把结构数组传递给这个函数
// b.修改a部分,传递结构的值而不是结构的地址
#include <stdio.h>
#include <ctype.h>
#define SIZE 10
struct name
{
    char fname[SIZE];
    char mname[SIZE];
    char lname[SIZE];
};
struct member{
    long int number;
    struct name person;
};
void afunc(struct member *);
void bfunc(struct member );
int main(void)
{
    struct member members[3]={{302039823,{"Dribble","Melon","Flossie"}},{2333333,{"Alan","","Musk"}},{55555555,{"XIXI","He","Zhang1"}}};
    afunc(members);
    printf("b:\n");
    for(int i=0;i<3;i++)
    {
        bfunc(members[i]);
    }
    return 0;
}
void afunc(struct member * members)
{
    for(int i=0;i<3;i++)
    {
        printf(" %s, %s ",members->person.fname,members->person.lname);
        if((members->person.mname[0])!=' '&&(members->person.mname[0])!='\n'&&(members->person.mname[0])!='\0')
        {

            printf("%c.",toupper(members->person.mname[0]));
        }
        printf(" -- %ld\n",members->number);
        members++;
    }
}
void bfunc(struct member members)
{
        printf(" %s, %s ",members.person.fname,members.person.lname);
        if((members.person.mname[0])!=' '&&(members.person.mname[0])!='\n'&&(members.person.mname[0])!='\0')
        {

            printf("%c.",toupper(members.person.mname[0]));
        }
        printf(" -- %ld\n",members.number);
}
