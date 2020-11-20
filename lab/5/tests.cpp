#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A"){
	CHECK(isDivisibleBy(18,6)==true);
	CHECK(isDivisibleBy(-15,5)==true);
	CHECK(isDivisibleBy(20,3)==false);
	CHECK(isDivisibleBy(5,0)==false);
	CHECK(isDivisibleBy(0,0)==false);
	CHECK(isDivisibleBy(0,5)==true);
}

TEST_CASE("Task B"){
	CHECK(isPrime(2)==true);
	CHECK(isPrime(-8)==false);
	CHECK(isPrime(6)==false);
	CHECK(isPrime(0)==false);
	CHECK(isPrime(1)==false);
}

TEST_CASE("Task C"){
	CHECK(nextPrime(5)==7);
	CHECK(nextPrime(6)==7);
	CHECK(nextPrime(0)==2);
	CHECK(nextPrime(-10)==2);
}

TEST_CASE("Task D"){
	CHECK(countPrimes(25,27)==0);
	CHECK(countPrimes(3,11)==4);
	CHECK(countPrimes(4,14)==4);
	CHECK(countPrimes(13,0)==0);
}

TEST_CASE("Task E"){
	CHECK(isTwinPrime(6)==false);
	CHECK(isTwinPrime(5)==true);
	CHECK(isTwinPrime(23)==false);
	CHECK(isTwinPrime(-10)==false);
	CHECK(isTwinPrime(0)==false);
}

TEST_CASE("Task F"){
	CHECK(nextTwinPrime(7)==11);
	CHECK(nextTwinPrime(8)==11);
	CHECK(nextTwinPrime(11)==13);
	CHECK(nextTwinPrime(13)==17);
	CHECK(nextTwinPrime(18)==19);
	CHECK(nextTwinPrime(-10)==3);
	CHECK(nextTwinPrime(0)==3);
}

TEST_CASE("Task G"){
	CHECK(largestTwinPrime(2,2)==-1);
	CHECK(largestTwinPrime(100,2)==-1);
	CHECK(largestTwinPrime(1,31)==31);
}