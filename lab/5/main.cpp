#include <iostream>
#include <cstdlib>


#include "funcs.h"

int main()
{
	isDivisibleBy(18,6);
	isDivisibleBy(-15,5);
	isDivisibleBy(20,3);
	isDivisibleBy(5,0);
	isDivisibleBy(0,0);
	isDivisibleBy(0,5);
	isPrime(2);
	isPrime(-8);
	isPrime(6);
	isPrime(0);
	isPrime(1);
	nextPrime(5);
	nextPrime(6);
	nextPrime(0);
	nextPrime(-10);
	countPrimes(25,27);
	countPrimes(3,11);
	countPrimes(4,14);
	countPrimes(13,0);
	isTwinPrime(6);
	isTwinPrime(5);
	isTwinPrime(23);
	isTwinPrime(-10);
	isTwinPrime(0);
	nextTwinPrime(7);
	nextTwinPrime(8);
	nextTwinPrime(11);
	nextTwinPrime(13);
	nextTwinPrime(18);
	nextTwinPrime(-10);
	nextTwinPrime(0);
	largestTwinPrime(2,2);
	largestTwinPrime(100,2);
	largestTwinPrime(1,31);
  	return 0;
}
