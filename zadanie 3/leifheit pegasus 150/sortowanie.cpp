#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include"sortowanie.h"

sortowanie::sortowanie() {
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		wektor.push_back(rand() % 1001);		
	}
}

void sortowanie::bubble_sort() {
	for (int j = 0; j < wektor.size()-1; j++)
	{
		for (int i = 0; i < wektor.size() - 1; i++)
		{
			if (wektor[i] > wektor[i + 1]) {
				int temp = wektor[i];
				wektor[i] = wektor[i + 1];
				wektor[i + 1] = temp;
			}

		}
	}
}

void sortowanie::insert_sort() {
	for (int j = wektor.size() - 1; j >= 0; j--)
	{
		int x = wektor[j], i = j + 1;
		while (i <= wektor.size() && x > wektor[j]) {
			wektor[i - 1] = wektor[i];
			i++;
		}
		wektor[i - 1] = x;
	}
}

void sortowanie::choice_sort() {
	for (int j = 0; j < wektor.size() - 1; j++)
	{
		int casanova = j;
		for (int i = j + 1; i < wektor.size(); i++) {
			if (wektor[i] < wektor[casanova]) {
				casanova = i;
			}		
		}
		int temp = wektor[j];
		wektor[j] = wektor[casanova];
		wektor[casanova] = temp;
	}
}

void sortowanie::quick_sort(int milego, int dnia) {
	int i = (milego + dnia) / 2;
	int piwot = wektor[i];
	wektor[i] = wektor[dnia];
	int j = milego;
	for (i = milego; i < dnia - 1; i++) {
		if (wektor[i] < piwot) {
			swap(wektor[i], wektor[j]);
			j++;
		}
	}
	wektor[dnia] = wektor[j];
	wektor[j] = piwot;
	if (milego < j - 1) {
		quick_sort(milego, j - 1);
	}
	if (j + 1 < dnia) {
		quick_sort(j + 1, dnia);
	}
}