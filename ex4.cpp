#include <iostream>
#include <ctime>
using namespace std;
int main()
{
//Вариант 2
	/*1. Задан массив A, содержащий 12 целых случайных чисел от - 5 до 5. Найти сумму элементов массива.*/
/*	int sym = 0;
	const int a = 12;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; i++) {
		mas[i] = rand() % 11 - 5;
		cout << mas[i] << endl;
		sym = sym + mas[i];
	}
	cout << sym << endl;*/
	/*2. Задан массив, который содержит 13 случайных целых чисел от -12 до 12. Найти произведение отрицательных элементов массива.*/
/*	int pr = 1;
	const int a = 13;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i) {
		mas[i] = rand() % 25 - 12;
		cout << mas[i] << endl;
		if (mas[i] < 0) {
			pr = pr * mas[i];
		}
	}
	cout << "proiz" <<" "<< pr << endl;*/
	/*3. Задан массив, который содержит 11 случайных целых чисел от 0 до 20.
	Найти количество элементов массива, которые делятся на 3 или на 5 или на 7.*/
/*	int kol = 0;
	const int a = 11;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i) {
		mas[i] = rand() % 21;
		cout << mas[i] << endl;
		if (mas[i] % 3 == 0 || mas[i] % 5 == 0 || mas[i] % 7 == 0) {
			kol = kol + 1;
		}
	}
	cout << kol << endl;*/
	/*4. Задан массив из 15 целых чисел  от 0 до 25. Найти сумму элементов массива, которые являются нечетными числами.*/
/*	int sym = 0;
	const int a = 15;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i) {
		mas[i] = rand() % 26;
		cout << mas[i] << endl;
		if (mas[i] % 2 != 0) {
			sym = sym + mas[i];
		}
	}
	cout << "sym" << sym << endl;*/
	return 0;
}