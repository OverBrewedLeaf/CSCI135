#include <iostream>
#include <string>

#include "indent.h"

int countChar(std::string line, char c){
	int ans = 0;
	for(char i: line){
		if(i == c) ans++;
	}
	return ans;
}