#include <iostream>
#include "LinkList.h"
using namespace std;

void InitList(L phead) {   //初始化的时候头节点也不要，直接就是一个指针
	phead = nullptr;
	cout << "init successfully" << endl;
}
void PrintList(L phead) {
	if (phead == nullptr||phead->next == nullptr)
		cout << "The list is null." << endl;
	L p_work = phead->next;
	while (p_work!=nullptr)
	{
		cout << p_work->data << endl;
		p_work = p_work->next;
	}
}
L CreateLinkHead(L& phead) {
	L s = nullptr;
	int x;
	phead = (L)malloc(sizeof(LNode));  //创建一个头节点
	phead->next = NULL;
	cout << "Please Input the value:" << endl;
	cin >> x;
	while (x!=-1)
	{
		//s = (L)malloc(sizeof(LNode));
		s = new LNode();
		cout << s->data << endl;
		s->data = x;
		s->next = phead->next;
		phead->next = s;
		cin >> x;

	}
	return phead;
}
L CreateLinkTail(L& phead) {
	L s = nullptr;
	L p_tail = nullptr;  //设置一个尾指针
	int x;
	phead = (L)malloc(sizeof(LNode));  //创建一个头节点
	phead->next = nullptr;
	p_tail = phead;
	cout << "Please Input the value:" << endl;
	cin >> x;
	while (x!= -1)
	{
		s = (L)malloc(sizeof(LNode));
		s->data = x;
		p_tail->next = s;
		p_tail = p_tail->next;
		cin >> x;
	}
	p_tail->next = nullptr;
	return phead;
}
void DestoryList(L& phead) {
	if (phead == nullptr) {
		cout << "List is null." << endl;
	}
	L p_forward = phead->next;
	while (p_forward != nullptr)
	{
		delete(phead);
		phead = p_forward;
		p_forward = p_forward->next;
	}
	delete(phead);
}
void ClearList(L& phead) {
	if (phead == nullptr||phead->next==nullptr) {
		cout << "List is null." << endl;
	}
	DestoryList(phead->next);
	phead->next = nullptr;
}
int FindList(L phead, int pos) {
	if (phead == nullptr || phead->next == nullptr)
	{
		cout << "List is null." << endl;
		return 0;
	}
	if (pos <= 0) {
		cout << "input pos is incorrected." << endl;
		return 0;
	}
	L p_work = phead->next;
	int current_pos = 1;
	while (p_work != nullptr) {
		if (current_pos == pos) {
			return p_work->data;
		}
		else {
			p_work = p_work->next;
			++current_pos;
		}
	}
	cout << "input pos is incorrected" << endl;
	return 0;
}
int LengthList(L phead) {
	if (phead == nullptr)
	{
		cout << "there is no list" << endl;
		return 0;
	}
	L p_work = phead;
	int length = 0;
	while (p_work->next != nullptr) {
		p_work = p_work->next;
		length++;
	}
	return length;
}   //求链表的长度
void DeleteX(L phead, int pos) {
	if (phead == nullptr || phead->next == nullptr)
	{
		cout << "List is null." << endl;
	}
	if (pos <= 0||pos>LengthList(phead)) {
		cout << "input pos is incorrected." << endl;
	}
	L p_delete = nullptr;
	L p_work = phead;
	for (int i = 0; i < pos - 1; ++i) {
		p_work = p_work->next;
	}
	p_delete = p_work->next;
	p_work->next = p_work->next->next;
	delete(p_delete);

} //删除链表第pos个位置的元素
void InsertX(L phead, int pos,int value) {
	if (phead == nullptr || phead->next == nullptr)
	{
		cout << "List is null." << endl;
	}
	if (pos <= 0 || pos > LengthList(phead)) {
		cout << "input pos is incorrected." << endl;
	}
	L p_delete = nullptr;
	L p_work = phead;
	for (int i = 0; i < pos - 1; ++i) {
		p_work = p_work->next;
	}
	L p_temp = (L)malloc(sizeof(LNode));
	p_temp->data = value;
	p_temp->next = p_work->next;
	p_work->next = p_temp;
}  //在链表的第pos个位置插入元素
void SortList(L phead) {

}           //对链表中的元素进行排序

