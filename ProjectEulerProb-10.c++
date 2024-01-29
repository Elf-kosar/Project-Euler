//PROJECT EULER PROB 10
#include<iostream>
#include<cmath>
using namespace std;

bool PrimeCheck(int num) {
    int b = 2;

    while (b <= sqrt(num)) {
        if (num % b == 0) {
            return false;
        }

        b++;
    }

    return true;
}

int main() {
    int a = 2;
    int up = 2000000;
    long long count = 0;

    for (int num=a; num <= up; ++num) {
        if (PrimeCheck(num)) {
            count += num;
        }
  }
    cout << count << endl;

    return a;
}