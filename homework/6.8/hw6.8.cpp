/*
Author: Jeffrey Li
Professor Tong Yi

Checks if two int arrays are the same
*/
#include <iostream>

bool equals(int a[], int a_size, int b[],int b_size){
	if(a_size != b_size) return false;//checks for if sizes are correct.
	for(int i = 0; i < a_size; i++){
		if(a[i] != b[i]) return false;//returns false if some array portion isn't equal then stops the function.
	}
	return true;//if all tests are checked through, return true
}