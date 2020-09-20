/*
Author: Jeffrey Li
Professor Tong Yi

Determines if a number is a negative, zero or positive.
*/
#include <iostream>

using namespace std;

int main(){
	cout << "Enter an integer: ";
	int number;//declare variable type for input
	cin >> number;//ask for number
	if(number > 0) cout << "positive\n";//if number is larger than 0, it is pos
	else if(number < 0) cout << "negative\n";//if less then neg
	else if(number == 0) cout << "zero\n";//if it is 0 then it is 0
	return 0;
}
