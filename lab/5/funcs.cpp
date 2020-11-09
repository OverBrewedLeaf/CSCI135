#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisibleBy(int n,int d){
	if(d == 0)return false;//checks for 0 case
	return n%d== 0;
}

bool isPrime(int n){
	if(n < 2) return false;//negatives, zeros and 1 are not considered prime
	for(int i = 2; i < n; i++)//loops through all numbers starting from 2 to see if it is divisible.
		if(isDivisibleBy(n,i))return false;//if it is divisible, it is not prime
	return true;//if it goes through the whole loop, it is a prime number
}

int nextPrime(int n){
	for(int i = n+1; true ; i++)//loops number until next prime
		if(isPrime(i)) return i;
	return 0;
}

int countPrimes(int a, int b){
	int ans = 0;//counter variable
	for(int i = a; i <= b; i++){//loops through the range
		if(isPrime(i))ans++;
	}
	return ans;
}

bool isTwinPrime(int n){
	return isPrime(n) && isPrime(n+2) || isPrime(n) && isPrime(n-2);//checks 2 numbers behind and after
}

int nextTwinPrime(int n){
	for(int i = n+1; true ; i++)//loops until next prime is found
		if(isTwinPrime(i)) return i;
}

int largestTwinPrime(int a, int b){
	for(int i = b; i >= a; i--)//loops backwards until a twin is found
		if(isTwinPrime(i)) return i;
	return -1;//if no twin is found,return -1
}