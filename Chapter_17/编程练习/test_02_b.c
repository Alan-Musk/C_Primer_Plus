// list.c -- 支持链表操作的函数
#include <stdio.h>
#include <stdlib.h>
#include "test_02_a.h"

//局部函数原型
static void CopyToNode(Item item,Node * pnode);

//接口函数
//把链表设置为空
void InitializeList(List * plist)
{
    (*plist).head=NULL;
    (*plist).head=NULL;
}
//如果链表为空,返回true
bool ListIsEmpty(const List * plist)
{
    if((*plist).head==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//如果链表已满,返回true
bool ListIsFull(const List * plist)
{
    Node * pt;
    bool full;

    pt=(Node *)malloc(sizeof(Node));
    if(pt==NULL)
    {
        full=true;
    }
    else
    {
        full=false;
    }
    free(pt);
    return full;
}

//返回节点的数量
unsigned int ListItemCount(const List * plist)
{
    unsigned int count=0;
    Node * pnode =(*plist).head;   //设置链表的开始
    while(pnode!=NULL)
    {
        ++count;
        pnode=pnode->next;
    }
    return count;
}

//创建存储项的节点,并将其添加至由plist指向的链表末尾(缓慢的实现)
bool AddItem(Item item,List * plist)
{
    Node * pnew;
    Node * scan=plist->end;

    pnew=(Node *)malloc(sizeof(Node));
    if(pnew==NULL)
    {
        return false;   //失败时退出函数
    }
    CopyToNode(item,pnew);
    pnew->next=NULL;
    if(scan==NULL)  //如果是空链表,把pnew放在链表的开头
    {
        plist->head=pnew;
        plist->end=pnew;
    }
    else
    {
        while(scan->next!=NULL)
        {
            scan=scan->next;//找到链表的末尾
        }
        scan->next=pnew;
    }
    return true;
}
//访问每个节点并执行pfun指向的函数
void Traverse(const List * plist,void (*pfun)(Item item))
{
    Node * pnode=plist->head;    //设置链表的开始(链表开始作为锚点,不能修改)
    while(pnode!=NULL)
    {
        (*pfun)(pnode->item);   //调用函数
        pnode=pnode->next;      //前进到下一项
    }
}
//释放由malloc()分配的内存
//设置链表指针为NULL
void EmptyTheList(List * plist)
{
    Node * psave;
    while(plist->head!=NULL)
    {
        psave=plist->head->next;
        free(plist->head);
        plist->head=psave;
    }
}
//局部函数定义
//把一个项拷贝到节点中
static void CopyToNode(Item item,Node * pnode)
{
    pnode->item=item;
}