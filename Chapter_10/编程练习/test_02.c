// 编写一程序,初始化一个double类型的数组,然后把该数组的内容拷贝至3个其他数组中(在main()中声明这4个数组).
// 使用带数组表示法的函数进行第一份拷贝,使用带指针表示法和指针递增的函数进行第二份拷贝.把目标数组名,源数组名和待拷贝的元素作为前两个函数的参数
// 第三个函数以目标数组名,源数字和指向源数组最后一个元素后面的元素的指针.也就是说给定一下声明,贼函数调用如下所示
// double source[5]={1.1,2.2,3.3,4.4,5.5};  double target1[5];  double target2[5];  double target3[5];
// copy_arr(target1,source,5); copy_ptr(target2,source,5);  copy_ptrs(target3,source,source+5);
#include <stdio.h>
#define SIZE 5
void copy_arr(double target1 [],double source [],int num);
void copy_ptr(double * target2,double * source,int num);
void copy_ptrs(double target3[],double source[],double least[]);
int main(void)
{
    double source[SIZE]={1.1,2.2,3.3,4.4,5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];
    copy_arr(target1,source,SIZE);
    copy_ptr(target2,source,SIZE);
    copy_ptrs(target3,source,source+SIZE);
    return 0;
}
//使用带数组表示法的函数进行第一份拷贝
void copy_arr(double target1 [],double source [],int num)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        target1[i]=source[i];
        printf("target1[%d]=%.1lf\n",i,target1[i]);
    }
}
//使用带指针表示法和指针递增的函数进行第二份拷贝
void copy_ptr(double * target2,double * source,int num)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        *(target2+i)=*(source+i);
        printf("target2[%d]=%.1lf\n",i,*(target2+i));
    }
}
void copy_ptrs(double target3[],double source[],double least[])
{
    int i;
    for(i=0;least!=source;least--,i++)
    {
         *(target3+i)=*(source+i);
        printf("target3[%d]=%.1lf\n",i,*(target3+i));
    }
}