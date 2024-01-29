//PROJECT EULER PROB 12

#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int count = 1;
	int sayac = 0;
	int n = 1;

	while (sayac <= 500) {
		n++;
		sayac = 0;
		count = n * (n + 1) / 2;
		for (int bolen=1; bolen <= sqrt(count); bolen++) {
			if (count % bolen == 0) {
				sayac++;
			}

		}
		sayac *= 2;



	}
	cout << count << endl;
	return 0;
}