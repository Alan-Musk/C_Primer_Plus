// 编写一个函数,把一个unsigned int 类型值中的所有位向左旋转指定数量的位.例如,rotate_1(x,4)就把x中所有位向左移动4个位置
// 而且从最左端移出的位会重新出现在右端.也就是说,把高阶位移出的位放在低阶位
#include <stdio.h>
#define SIZE 5
void itobs(int num,int bit);
int main(void)
{
    int num,bit;
    printf("请输入数字和要移动位置的多少.");
    scanf("%d %d",&num,&bit);
    itobs(num,bit);

    return 0;
}
void itobs(int num,int bit)
{
    int i;
    char st[SIZE]={'0'};
    for(i=SIZE-2;i>=0;i--,num>>=1)
    {
        st[i]=(01&num)+'0';
    }
    st[SIZE-1]='\0';
    for(i=0;i<SIZE;i++)
    {
        printf("%c",st[i]);
    }
    //位移
    for(i=0;i<bit;i++)
    {
        int j=0;
        char temp=st[j];
        while(st[j]!='\0')
        {
            st[j]=st[j+1];
            j++;
        }
        st[SIZE-2]=temp;
    }
    printf("\n");
    for(i=0;i<8;i++)
    {
        printf("%c",st[i]);
    }
    printf("\n");
}