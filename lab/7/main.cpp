#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

#include "unindent.h"
#include "indent.h"

int main(){
	std::fstream code;
	std::string line;
	std::string ans;
	code.open("bad-code.cpp");
	int tabs = 0;
	while(getline(code,line)){	
		line = removeLeadingSpaces(line);
		ans = line;
		tabs -= countChar(line,'}');
		for(int i = 0; i < tabs; i++){
			ans = "\t" + ans;
		}
		tabs += countChar(line,'{');
		std::cout << ans << "\n";	
	}
	code.close();
	return 0;
}