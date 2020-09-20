//Author: Jeffrey Li
//Purpose: Determine a vehicle's fuel cost needed for 100 miles and total miles it can run on a full tank

#include <iostream>//brings in iostream library

using namespace std;

int main(){
	double tank;
	double efficiency;
	double rate;
	cout << "The number of gallons of gas in the tank\n";
	cin >> tank;
	cout << "The fuel efficiency in miles per gallon\n";
	cin >> efficiency;
	cout << "The price of gas per gallon\n";
	cin >> rate;
	cout << "It costs " << 100*rate/efficiency << " dollars to go 100 miles and it can go " << tank*efficiency << " miles.\n";
	return 0;//to sastify the int method
}
