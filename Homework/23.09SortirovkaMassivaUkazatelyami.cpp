#include <iostream>
#include <string>

using namespace std;

int main() {
	int r, i, k, s, j;        // i и j для прокрутки циклов
	s = 10;                   // r - дополнительное ведро когда меняем местами
	int a[s];
	for (i = 0; i < s; i = i + 1) {     //вводим массив
		cin >> a[i];
	}
	int *ptr = a;            // тут объявили указатель
	for (i = 0; i < 10; i = i + 1) {     //начинаем крутить циклы
		for (j = 0; j < 9; j = j + 1) {
			k = j + 1;         // k заюзал чтобы каждый раз j+1 не писать
			if ((ptr + j) > (ptr + k)) {
				r = *(ptr + j);       // меняем местами
				*(ptr + j) = *(ptr + k);
				*(ptr + k) = r;
			}
		}
	}
	for (i = 0; i < s; i = i + 1) {       //выводим массив
		cout << (*ptr + i) << ' ';
	}
	return 0;
}
