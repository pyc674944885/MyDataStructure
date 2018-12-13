#pragma once
#ifndef LINK_LIST
#define LINK_LIST

typedef struct LNode {   //����һ��������
	int data;
	LNode *next;
} LNode,*L;

typedef struct DNode {   //����һ��������
	int data;
	DNode *next,*pre;
} DNode, *D;

void InitList(L phead);
L CreateLinkHead(L& phead); //ͷ�巨��������
L CreateLinkTail(L& phead); //β�巨��������
void PrintList(L phead);  //��ӡ����
void DestoryList(L& phead);   //��������
void ClearList(L&);         //�������
int FindList(L phead, int pos); 
int LengthList(L phead);   //������ĳ���
void DeleteX(L phead, int pos);  //ɾ�������pos��λ�õ�Ԫ��
void InsertX(L phead, int pos,int value);  //������ĵ�pos��λ�ò���Ԫ��
void SortList(L phead);         //�������е�Ԫ�ؽ�������
void DeleteAllX(L& l,int x);//ɾ������������ֵΪx��Ԫ��  ����1
void ReversePrint(L phead);
void DeleteMin(L phead);
#endif // !LINK_LIST

