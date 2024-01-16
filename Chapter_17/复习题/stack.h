// stack.h -- Stack的接口
#ifndef _STACK_H_
#define _STACK_H_
#include <stdbool.h>
#define MAXSTACK 100

// 自定义数据类型
typedef struct item
{
    int num;    //设置栈内数据的类型
}Item;
typedef struct stack
{
    Item item[MAXSTACK];
    int top;  //前一个地址
}Stack;

// 操作:        初始化栈
// 前提条件:    ps指向一个栈
// 后置条件:    该栈初始化为空
void InitializeStack(Stack *ps);

// 操作:        检查栈是否满
// 前提条件:    ps指向之前已经初始化的栈
// 后置条件:    如果栈满,返回True,否则返回false
bool FullStack(Stack *ps);

// 操作:        检查栈是否为空
// 前提条件:    ps指向之前已经初始化的栈
// 后置条件:    如果栈空,返回true;否则,返回false
bool EmptyStack(Stack * ps);

// 操作:        把数据入栈
// 前提条件:    ps指向之前已经初始化的栈,item为将要入栈的项
// 后置条件:    如果栈满,返回false,否则入栈,修改top
bool push(Item item,Stack * ps);

// 前提条件:    ps指向之前已经初始化的栈
// 后置条件:    如果栈不为空,把栈项数据复制到item中,修改top,删除栈顶数据;如果删除之前栈已空,返回false
bool pop(Item *pitem,Stack *ps);
#endif