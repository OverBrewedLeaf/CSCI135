/*
Author:Jeffrey Li
Professor Tong Yi

combines two vectors and returns one final full vector
*/
#include <vector>

std::vector<int> append(std::vector<int> a,std::vector<int> b){
	for(int x:b){
		a.push_back(x);
	}
	return a;
}