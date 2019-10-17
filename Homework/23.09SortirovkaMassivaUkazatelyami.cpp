#include <iostream>
#include <string>

using namespace std;

int main() {
	int r, i, s, j;       
	s = 10;                   
	int a[s];
	for (i = 0; i < s; i = i + 1) {    
		cin >> a[i];
	}
	int *ptr = a;         
	for (i = 0; i < s; i = i + 1) {  
		for (j = 0; j < s; j = j + 1) {
			if (*(ptr + j) > *(ptr + i)) {
				r = *(ptr + j);      
				*(ptr + j) = *(ptr + i);
				*(ptr + i) = r;
			}
		}
	}
	for (i = 0; i < s; i = i + 1) {    
		cout << *(ptr + i) << ' ';
	}
	return 0;
}
