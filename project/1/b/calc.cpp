//Author: Jeffrey Li
//Purpose: add numbers from an expression from another file.

#include <iostream>//brings in iostream library

using namespace std;

int main(){
	int ans = 0;
	int num = 0;
	char op = '+';
	while(cin >> num){// go thrught the txt file
		if(op == '+'){//adds to or subtract from answer
			ans += num;
		}
		else if(op == '-'){
			ans -= num;
		}
		cin >> op;//find the next operator to decide rather to add or subtract
	}
	cout << ans << "\n";//prints answer
	return 0;//to sastify the int method
}
