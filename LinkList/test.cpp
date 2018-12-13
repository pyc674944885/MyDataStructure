#include <iostream>
#include "LinkList.h"
using namespace std;
int main() {
	L phead = nullptr;
	//InitList(phead);
   //CreateLinkTail(phead);
	//PrintList(phead);
	
	cout << "----------------------I'm devide line----------------------" << endl;
	//ClearList(phead);
	CreateLinkHead(phead);
	PrintList(phead);
	cout << "----------------------I'm devide line----------------------" << endl;
	//DeleteAllX(phead->next,3);
	//ReversePrint(phead->next);
	DeleteMin(phead);

	PrintList(phead);
	//PrintList(phead);
	/*
	//cout << FindList(phead,3) << endl;
	DeleteX(phead, 3);
	PrintList(phead);
	cout << "----------------------I'm devide line----------------------" << endl;
	InsertX(phead, 2, 9);
	PrintList(phead);*/
	
}