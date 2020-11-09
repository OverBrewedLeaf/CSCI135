#include <iostream>
#include <cstdlib>

int main(){
	srand(time(0));
	int min,max,response,guess;
	int loop = 0;
	std::cout << "Enter left end in range: ";
	std::cin >> min; 
	std::cout << "Enter right end in range: ";
	std::cin >> max;
	std::cout << "User has int in [" << min << "," << max << "]. Computer will now guess.\n";
	while(true){
		loop++;
		guess = rand()%(max - min + 1)+ min;
		do{
			std::cout << "\nGuess #" << loop << ": " << guess << ". How is my guess? \n1. too big   2. too small    3. just right\nEnter only 1, 2, or 3:";
			std::cin >> response;
		}while(!(response == 1 || response == 2 || response == 3));
		if(response == 1)max = guess;
		else if(response == 2)min = guess;
		else{
			std::cout << "Congradulations! The answer is " << guess << "\n";
			break;
		}
	}
	return 0;
}