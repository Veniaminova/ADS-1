#include <cstdint>
#include "alg.h"
#include <cmath>

bool chekPrime(uint64_t value) {
	for (int i = 2; i <= sqrt(value); ++i) {
		if (value % i == 0)
			return false;
	}
	return true;
}

uint64_t nPrime(uint64_t n) {
	uint64_t count = 0;
	uint64_t num = 2;
		while (count < n) {
		if (chekPrime(num)) {
			count++;
		}
		num++;
	}
	cout << num - 1;
	return num - 1;
}

uint64_t nextPrime(uint64_t value) {
	int nextPrime = value + 1;
	bool isPrime = true;
	while (isPrime) {
		int isPrime = true;
		for (int i = 2; i <= sqrt(nextPrime); i++) {
			if (nextPrime % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			cout << "next prime " << nextPrime;
			return nextPrime;
		}
		else {
			nextPrime++;
		}
	}
}


uint64_t sumPrime(uint64_t hbound) {
	int summa = 0;
	for (int i = 0; i < hbound; ++i) {
		for (int n = 2; n < sqrt(i); ++n) {
			if (i % n != 0)
				summa += i;
		}
	}
	cout << "sum prime " << summa;
	return summa;
}

