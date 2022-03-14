#pragma once
class ListElement {
public:
	int value;
	ListElement* nextElement, *previousElement;
};

class List {
private:
	ListElement* head, *tail;
	int size = 0;
public:
	void Print();
	List();
	~List();
	void Add(int val);
	void Remove();
	int At(int index);
};