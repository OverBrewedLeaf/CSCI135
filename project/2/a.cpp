#include <iostream>
#include <cstdlib>

int main(){
	srand(time(0));
	int min;
	int max;
	int guess;
	int loop = 0;
	std::cout << "Enter the min end of range: ";
	std::cin >> min; 
	std::cout << "Enter the max end of range: ";
	std::cin >> max;
	int target = rand()%(max - min + 1)+ min;
	while(guess != target){
		std::cout << "\nGuess #" << loop << ": enter your guess: ";
		std::cin >> guess;
		if(guess > max || guess < min){
			loop--;
		}
		else if(guess > target){
			std::cout << "guess is too big";
			max = guess-1;
		}
		else if(guess < target){
			std::cout << "guess is too small";
			min = guess+1;
		}
		loop++;
	}
	std::cout << "Congradulations\n";

}