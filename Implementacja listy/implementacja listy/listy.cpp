#include "listy.h"
#include <iostream>
using namespace std;
List::List()
{
	head = nullptr;
	tail = nullptr;
}

List::~List()
{
}

int List::At(int index)
{
	ListElement* wskHead = head;
	for (int minecart = 0; minecart < index; minecart++)
	{
		wskHead = wskHead->nextElement;
	}
	return wskHead->value;
}

void List::Print()
{

	ListElement* wskHead = head;
	while (wskHead)
	{
		cout << wskHead->value;
		wskHead = wskHead->nextElement;
	}
	cout << "\nrozmiar listy: " << size << endl;
}

void List::Add(int val)
{
	ListElement* wskElement = new ListElement();
	wskElement->value = val;
	if (head == nullptr) {
		head = wskElement;
		tail = wskElement;
	}
	else {
		ListElement* wskPoprzedniElement = tail;
		tail->nextElement = wskElement;
		tail = tail->nextElement;
		tail->previousElement = wskPoprzedniElement;
	}
	size++;
}

void List::Remove()
{
	ListElement* wskNaElDoUsuniecia = tail;
	if (size == 1) {
		delete head;
		head = nullptr;
		tail = nullptr;
		size = 0;
		return;
	}
	tail = wskNaElDoUsuniecia->previousElement;
	tail->nextElement = nullptr;
	delete wskNaElDoUsuniecia;
	size--;
}














