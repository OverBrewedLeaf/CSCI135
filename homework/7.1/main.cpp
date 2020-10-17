/*
Author: Jeffrey Li
Professor Tong Yi

Sorts two doubles using their pointer values
*/

void sort2(double* x,double* y){
	double* temp = y;
	if( y < x){
		y = x;
		x = temp;
	}
}

int main(){
	return 0;
}