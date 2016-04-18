#include <iostream>
using namespace std;

void merge(int a[], int lastA, int b[], int lastB) {
	int index = lastB + lastA + 1;
	while(lastA >= 0 && lastB >= 0) {
		if (a[lastA] > b[lastB]) {
			a[index] = a[lastA];
			lastA--;
		}
		else {
			a[index] = b[lastB];
			lastB--;
		}
		index--;
	}
	// Merge remaining elements in b
	// Array a is complete when b is
	while(lastB >= 0) {
		a[index] = b[lastB];
		lastB--;
		index--;
	}
 }

int main(){

	int a[13] = {0, 4, 14, 23, 29, 30, 31};
	int b[] = {6, 7, 29, 31, 100, 200};
	// another case
	// a[13] = {300, 304, 314, 323, 329, 330, 331};
	// a[13] = {0, 1, 2, 3, 4, 5, 6};
	merge(a, 6, b, 5);
	for (int i = 0; i < 13; ++i) {
		cout<<a[i]<<" ";
	}
	return 0;
}
