#include <iostream>
#include "sortowanie.h"
#include <chrono>
using namespace std;

int main()
{
	sortowanie helios;
	cout << "Ktore sortowanie chcesz wyprobowac?:\n1 - babelkowe\n2 - wstawiania\n3 - wyboru\n4 - szybkie\n";
	int wybor;
	cin >> wybor;
	auto start = chrono::steady_clock::now();
	if (wybor == 1) {
		helios.bubble_sort();
	}
	else if (wybor == 2) {
		helios.insert_sort();
	}
	else if (wybor == 3) {
		helios.choice_sort();
	}
	else if (wybor == 4) {
		helios.quick_sort(0, helios.wektor.size()-1);
	}
	auto end = chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
}


