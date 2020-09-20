/*
Author: Jeffrey Li
Professor Tong Yi

Determines if a set of three numbers are strictly increasing, decreasing or neither.
*/


#include <iostream>

using namespace std;

int main(){
	int one,two,three;//declares the three inputs
	cout << "Enter 3 numbers: ";
	cin >> one >> two >> three;//assigns the three inputs
	if(one > two && two > three) cout << "Decreasing\n";
	else if(one < two && two < three) cout << "Increasing\n";
	else cout << "Neither\n";
	return 0;
}
