#include <iostream>
#include "listy.h"
#include <conio.h>
using namespace std;

int main()
{
	int wartoscDoDodania;
	int index;
	List lista;
	while (1) {
		cout << "Co chcesz zrobic?:\n1. Dodac element\n2. Usunac ostatni element\n3. Wyswietlic zawartosc elementu listy o danym indexie\n4. Wydrukowac zawartosc listy na ekran\n";
		int wybor;
		cin >> wybor;
		switch (wybor)
		{
		case 1:
			cout << "Podaj wartosc elementu int:\n";
			cin >> wartoscDoDodania;
			lista.Add(wartoscDoDodania);
			cout << "Element dodany do listy\n\n";
			break;

		case 2:
			lista.Remove();
			cout << "Usunieto ostatni element\n\n";
			break;

		case 3:
			cout << "Podaj index:\n";
			cin >> index;
			cout << "Element o indexie " << index << " ma wartosc: " << lista.At(index) << "\n\n";
			break;

		case 4:
			lista.Print();
			cout << "\n\n";
			break;

		default:
			cout << "Nie ma takiej opcj\n\n";
			break;
		}
		cout << "Nacisnij dowolny klawisz aby kontynuowac\n\n";
		_getch();
	}
	/*
List lista;
lista.Add(3);
lista.Add(6);
lista.Add(4);
lista.Add(9);
lista.Add(1);
lista.Print();
cout << "\n****************\n";
lista.Add(7);
lista.Print();
cout << "\n****************\n";
cout << lista.At(3) << endl;
cout << lista.At(4) << endl;
cout << lista.At(0) << endl;
cout << "\n****************\n";
lista.Remove();
lista.Print();
cout << "\n****************\n";
cout << lista.At(0);
*/
}
