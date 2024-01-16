// 编写一个程序满足下面的要求 a.外部定义一个有两个成员的结构模板name:一个字符串存储名,一个字符串存储姓.
// b.外部定义一个有3个成员的结构模板student:一个name类型的结构,一个grade数组存储3个浮点型分数,一个变量存储3个分数平均数
// c.在main()函数中声明一个内含CSIZE(CSIZE=4)个student类型结构的数组,并初始化这些结构的名字部分.用函数执行d,e,f和g中描述的任务
// d.以交互的方式获取每个学生的成绩,提示用户输入学生的姓名和分数.把分数存储到grade数组相应的结构中.可以在main()函数或其他函数中用循环来完成
// e.计算每个结构的平均分,并把计算后的值赋给合适的成员  f.打印每个结构的信息.   g.打印班级的平均分,即所有结构的数值成员的平均值
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 15
#define CSIZE 4
struct name{
    char fname[SIZE];
    char lname[SIZE];
};
struct student{
    struct name names;
    double grade[3];
    double average;
};
void clean(void);
char * s_gets(char * st,int n);
double aver(struct student *);
void show(struct student *);
double sumAverage(struct student *);
int main(void)
{
    char stuName[SIZE]; //用户输入学生姓名
    int i=0;            //循环常用参数
    bool search=false;//是否找到学生的姓名
    struct student * choice;//申明一个结构指针,指向用户选中的结构
    struct student students[CSIZE]={{.names={"alan","musk"}},{.names={"steve","jobs"}},{.names={"elon","musk"}},{.names={"july","angle"}}};
    printf("请输入学生的姓名:");
    while(s_gets(stuName,SIZE)!=NULL&&stuName[0]!='\0')
    {
        printf("输入的是%s\n",stuName);
        for(i=0;i<CSIZE&&(search==false);i++)
        {
            char temp[40];
            strcpy(temp,students[i].names.fname);
            strcat(temp,students[i].names.lname);
            if(strcmp(stuName,temp)==0)
            {
                choice=&students[i];
                search=true;
            }
        }
        if(search)
        {
            printf("请输入学生成绩\n");
            for(i=0;i<3;i++)
            {
                scanf("%lf",&choice->grade[i]);
                clean();
            }
            printf("该同学的平均成绩是:%lf\n",aver(choice));
            choice->average=aver(choice);
        }
        else
        {
            printf("找不到学生的姓名,请重新输入:");
            continue;
        }
        search=false;
        printf("还需要选择同学吗?(空行退出)\n");
    }
    printf("打印每个结构的信息:\n");
    show(students);
    printf("\n总平均分是%lf\n",sumAverage(students));
    printf("Done!\n");
    return 0;
}
// 打印班级平均分
double sumAverage(struct student * students)
{
    double sum=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=students->grade[i];
        }
        students++;
    }
    return sum/4;
}
//打印每个结构的信息
void show(struct student * students)
{
    for(int i=0;i<4;i++)
    {
        printf("%s %s的成绩是\n",students->names.fname,students->names.lname);
        for(int j=0;j<3;j++)
        {
            printf("%lf  ",students->grade[j]);
        }
        printf("\n平均值是:%lf\n",students->average);
        students++;
    }
}
//求平均值
double aver(struct student * choice)
{
    double sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=choice->grade[i];
    }
    return sum/3.0;
}
void clean(void)
{
    while(getchar()!='\n')
    {
        continue;
    }
}
char * s_gets(char * st,int n)
{
    char * ret_val;
    char * find;
    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        //去掉空格
        find=strchr(st,' ');
        if(find)
        {
            while(*find!='\n')
            {
                *find=*(find+1);
                find++;
            }
        }
        //把换行换成 null
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