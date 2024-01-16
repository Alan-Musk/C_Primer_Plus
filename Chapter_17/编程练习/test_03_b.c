#include <stdio.h>
#include "test_03_a.h"

// 初始化链表
void InitializeList(List * plist) {
    plist->items = 0; // 设置链表中的项数为0
}

// 检查链表是否为空
bool ListIsEmpty(const List * plist) {
    return plist->items == 0; // 如果项数为0，则链表为空
}

// 检查链表是否已满
bool ListIsFull(const List * plist) {
    return plist->items == MAXSIZE; // 如果项数等于最大大小，则链表已满
}

// 获取链表中的项数
unsigned int ListItemCount(const List * plist) {
    return plist->items; // 返回链表中的当前项数
}

// 向链表添加一个新项
bool AddItem(Item item, List * plist) {
    if (!ListIsFull(plist)) {
        plist->entries[plist->items] = item; // 将新项添加到数组的末尾
        plist->items += 1; // 递增项数
        return true;
    }
    return false; // 如果链表已满，返回false
}

// 遍历链表，对每个项执行一个函数
void Traverse(const List * plist, void (*pfun)(Item item)) {
    for (int i = 0; i < plist->items; i++) {
        (*pfun)(plist->entries[i]); // 对数组中的每个项执行pfun指向的函数
    }
}

// 清空链表
void EmptyTheList(List * plist) {
    plist->items = 0; // 将链表中的项数设置为0
}
