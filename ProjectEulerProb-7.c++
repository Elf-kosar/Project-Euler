//PROJECT EULER PROB 7

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

bool PrimeCheck(int a) {
    int b = 2;

    while (b <= sqrt(a)) {
        if (a % b == 0) {
            return false;
        }

        b++;
    }

    return true;
}

int nthPrime(int n) {
    int a = 2;
    int count = 0;

    while (n > 0) {
        if (PrimeCheck(a) == true) {
            count++;
            if (count == n) {
                break;
            }
        }

        a++;
    }

    return a;
}

int main() {
    cout << nthPrime(10001);

    return 0;
}