// list.c -- 支持链表操作的函数
#include <stdio.h>
#include <stdlib.h>
#include "test_02_a.h"

// 局部函数原型
static void CopyToNode(Item item, Node * pnode);

// 接口函数

// 初始化链表
void InitializeList(List * plist) {
    plist->head = NULL; // 初始化头指针为 NULL
    plist->end = NULL;  // 初始化尾指针为 NULL
}

// 判断链表是否为空
bool ListIsEmpty(const List * plist) {
    return plist->head == NULL; // 如果头指针为 NULL，则链表为空
}

// 判断链表是否已满
bool ListIsFull(const List * plist) {
    Node * pt;
    bool full;

    pt = (Node *)malloc(sizeof(Node));
    if (pt == NULL) {
        full = true; // 如果内存分配失败，则链表已满
    } else {
        full = false; // 否则，链表未满
    }
    free(pt); // 释放分配的测试节点
    return full;
}

// 返回链表中节点的数量
unsigned int ListItemCount(const List * plist) {
    unsigned int count = 0;
    Node * pnode = plist->head; // 从头节点开始
    while (pnode != NULL) {
        ++count; // 计数器递增
        pnode = pnode->next; // 移至下一个节点
    }
    return count; // 返回节点总数
}

// 添加一个节点到链表末尾
bool AddItem(Item item, List * plist) {
    Node * pnew;
    pnew = (Node *)malloc(sizeof(Node)); // 创建新节点
    if (pnew == NULL) {
        return false; // 内存分配失败时退出函数
    }
    CopyToNode(item, pnew); // 将数据拷贝到新节点
    pnew->next = NULL; // 设置新节点的下一个指针为 NULL
    if (plist->end == NULL) { // 如果链表为空
        plist->head = pnew; // 设置头指针指向新节点
        plist->end = pnew;  // 设置尾指针也指向新节点
    } else {
        plist->end->next = pnew; // 将新节点添加到链表末尾
        plist->end = pnew; // 更新尾指针为新节点
    }
    return true;
}

// 遍历链表并对每个节点执行指定函数
void Traverse(const List * plist, void (*pfun)(Item item)) {
    Node * pnode = plist->head; // 从头节点开始遍历
    while (pnode != NULL) {
        (*pfun)(pnode->item);  // 对每个节点调用指定函数
        pnode = pnode->next;   // 移至下一个节点
    }
}

// 释放链表占用的所有内存
void EmptyTheList(List * plist) {
    Node * psave;
    while (plist->head != NULL) {
        psave = plist->head->next; // 保存下一个节点的地址
        free(plist->head); // 释放当前节点的内存
        plist->head = psave; // 更新头指针为下一个节点
    }
    plist->end = NULL; // 最后将尾指针也设置为 NULL
}

// 局部函数定义

// 将一个项拷贝到节点中
static void CopyToNode(Item item, Node * pnode) {
pnode->item = item; // 拷贝数据到节点
}
