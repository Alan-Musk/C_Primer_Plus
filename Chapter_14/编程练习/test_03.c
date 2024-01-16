// 修改程序清单14.2中的图书目录程序,使其按照输入图书的顺序输出图书的信息,然后按照书名的字母顺序输出图书的信息,最后按照价格的升序输出图书的信息.
#include <stdio.h>
#include <string.h>
char * s_gets(char * st,int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 4    //书籍的最大数量

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
    int sortNum;
};

int main(void)
{
    struct book library[MAXBKS];    //book类型结构的数组
    struct book  * books[MAXBKS];             //申明一个存储地址的数组
    int count=0;
    int index=0;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while(count<MAXBKS&&s_gets(library[count].title,MAXTITL)!=NULL&&library[count].title[0]!='\0')
    {
        //把地址传入books数组
        books[count]=&library[count];
        printf("Now enter the author.\n");
        s_gets(library[count].author,MAXAUTL);
        library[count].sortNum=count+1;
        printf("Now enter the value.\n");
        scanf("%f",&library[count++].value);

        while(getchar()!='\n')
        {
            continue;
        }
        if(count<MAXBKS)
        {
            printf("Enter the next title.\n");
        }
    }
    if(count>0)
    {
        //按输入图书顺序输出信息
        printf("Here is the list of your books:\n");
        for(index=0;index<count;index++)
        {
            printf("%d %s by %s : $%.2f\n",library[index].sortNum,library[index].title,library[index].author,library[index].value);
        }
        //按书名的字母顺序输出图书的信息
        printf("按照书名的字母顺序输出图书的信息\n");
        int max=MAXBKS;//算法所需
        //排序
        for(index=0;index<max&&(books[index]->title)!=NULL;index++)
        {
            for(int j=0;j<=max&&(books[j+1]->title)!=NULL;j++)
            {
                if((strcmp(&books[j+1]->title[0],&books[j]->title[0]))<0)
                {
                    struct book * temp;
                    temp=books[j+1];
                    books[j+1]=books[j];
                    books[j]=temp;
                }
            }
        }
        //输出
        for(index=0;index<count;index++)
        {
            printf("%d %s by %s : $%.2f\n",books[index]->sortNum,books[index]->title,books[index]->author,books[index]->value);
        }
        //最后按照价格的升序输出图书的信息.
        printf("价格的升序输出图书的信息\n");
        for(index=0;index<max&&(books[index]->title)!=NULL;index++)
        {
            for(int j=0;j<=max&&(books[j+1]->title)!=NULL;j++)
            {
                if((books[j+1]->value)<(books[j]->value))
                {
                    struct book * temp;
                    temp=books[j+1];
                    books[j+1]=books[j];
                    books[j]=temp;
                }
            }
        }
        //输出
        for(index=0;index<count;index++)
        {
            printf("%d %s by %s : $%.2f\n",books[index]->sortNum,books[index]->title,books[index]->author,books[index]->value);
        }
    }
    else
    {
        printf("No books? Too bad.\n");
    }
    return 0;
}
char * s_gets(char * st,int n)
{
    char * ret_val;
    char * find;
    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
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