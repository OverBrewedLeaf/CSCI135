#include <iostream>
#include <string>
#include <cctype>

#include "unindent.h"

std::string removeLeadingSpaces(std::string line){
	std::string ans = line;
	while(isspace(ans[0])){
		ans = ans.substr(1);
	}
	return ans;
}