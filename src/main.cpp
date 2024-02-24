// Copyright 2022 NNTU-CS
#include "alg.h"

int main() {
    int n, m;
    cout << "Enter the number ";
    cin >> n;
    if (chekPrime(n)) {	
	    nextPrime(n);
    }
    cout << '\n';
    sumPrime(n);
    cout << '\n';
    cout << "Enter the index value: ";
    cin >> m;
    nPrime(m);
    return 0;
}
