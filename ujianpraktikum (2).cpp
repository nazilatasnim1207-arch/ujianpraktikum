#include<iostream>
using namespace std;
int main() {
	 
	int x = 5;
	cout << "masukkan tinggi segitiga: ";
	cout << x;

	for (int i = 0; i <= x; i++) {
		//agr brbtuk segitiga 
		for (int s = 1; s <= x - i; s++) {
			cout << " ";
		}
		
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
	}
		cout << endl;
	}

}
