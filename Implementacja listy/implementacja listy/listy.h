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



class wektor
{
public:
	wektor() {
		size = 10;
		tablica = new int[size];
		for (int i = 0; i < size; i++) {
			tablica[i] = 0;
		}
	}
	wektor(unsigned int welocemtoislandofsnakes) {
		size = welocemtoislandofsnakes;
		tablica = new int[size];
		for (int i = 0; i < size; i++) {
			tablica[i] = 0;
		}
	}
	void dodajElement(int a);
	void Print();
	~wektor() {
		delete[] tablica;
	}

private:
	int* tablica;
	unsigned int size;
};