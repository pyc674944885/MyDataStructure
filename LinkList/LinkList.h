#pragma once
#ifndef LINK_LIST
#define LINK_LIST

typedef struct LNode {   //定义一个单链表
	int data;
	LNode *next;
} LNode,*L;

typedef struct DNode {   //定义一个单链表
	int data;
	DNode *next,*pre;
} DNode, *D;

void InitList(L phead);
L CreateLinkHead(L& phead); //头插法创建链表
L CreateLinkTail(L& phead); //尾插法创建链表
void PrintList(L phead);  //打印链表
void DestoryList(L& phead);   //销毁链表
void ClearList(L&);         //清空链表
int FindList(L phead, int pos); 
int LengthList(L phead);   //求链表的长度
void DeleteX(L phead, int pos);  //删除链表第pos个位置的元素
void InsertX(L phead, int pos,int value);  //在链表的第pos个位置插入元素
void SortList(L phead);         //对链表中的元素进行排序
void DeleteAllX(L& l,int x);//删除链表中所有值为x的元素  王道1
void ReversePrint(L phead);
void DeleteMin(L phead);
#endif // !LINK_LIST

