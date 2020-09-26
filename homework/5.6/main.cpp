/*
Author: Jeffrey Li
Professor Tong Yi

Finds the middle characters of a string.
*/
#include <iostream>
#include <string>

using namespace std;

string middle(string);

int main(){
	cout << middle("Aardvark") + ", ";
	cout << middle("scandal") + "\n";
	cout << middle("");
	return 0;
}

string middle(string word){
	if(word.length()%2 == 0) return word.substr(word.length()/2-1,2);
	else return word.substr(word.length()/2,1);
}