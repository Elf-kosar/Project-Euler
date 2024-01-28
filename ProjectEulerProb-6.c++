#include<iostream>
using namespace std;
//PROJECT EULER PROB 6

int main() {
	int i = 1;
	int toplam = 0;
	int sonuc;
	int x = 0;
	for (int i = 1; i <= 100; i++) {
		x = x + i * i;
		
	}

	for (int a = 1; a <= 100; a++) {
        toplam += a;
		
	}
	toplam = toplam * toplam;
	cout << x << endl;
	cout << toplam << endl;
	sonuc = toplam - x;
	cout << sonuc;
}