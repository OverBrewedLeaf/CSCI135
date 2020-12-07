/*
Author: Jeffrey Li
Professor Tong Yi

combines and sorts two vectors
*/
#include <vector>
#include <algorithm>

std::vector<int> append(std::vector<int> a,std::vector<int> b){
	for(int x:b){
		a.push_back(x);
	}
	return a;
}

std::vector<int> merge_sorted(std::vector<int> a,std::vector<int> b){
	std::vector<int> c = append(a,b);
	std::sort(c.begin(),c.end());
	return c;
}