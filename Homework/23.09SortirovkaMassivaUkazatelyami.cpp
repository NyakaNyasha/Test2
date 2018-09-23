#include <iostream>
#include <string>

using namespace std;

int main() {
	int i, s, j;        // i и j для прокрутки циклов
	s = 10;                   // r - дополнительное ведро когда меняем местами
	int a[s];
	for (i = 0; i < s; i = i + 1) {     //вводим массив
		cin >> a[i];
	}
	int *ptr = a;            // тут объявили указатель
	for (i = 0; i < s; i = i + 1) {     //начинаем крутить циклы
		for (j = 0; j < s; j = j + 1) {
			if (*(ptr + j) > *(ptr + i)) {
				r = *(ptr + j);       // меняем местами
				*(ptr + j) = *(ptr + i);
				*(ptr + i) = r;
			}
		}
	}
	for (i = 0; i < s; i = i + 1) {       //выводим массив
		cout << *(ptr + i) << ' ';
	}
	return 0;
}
