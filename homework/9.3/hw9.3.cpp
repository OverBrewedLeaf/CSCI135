/*
Author Jeffrey Li
Professor Tong Yi

A code that simulates two light switches
*/
class Circuit{
public:
	int get_first_switch_state(){
		return one;
	}
	int get_second_switch_state(){
		return two;
	}
	int get_lamp_state(){
		return !(one == two);
	}
	void toggle_first_switch(){
		one = !one;
	}
	void toggle_second_switch(){
		two = !two;
	}
	Circuit(){
		one = false;
		two = false;
	}
private:
	bool one;
	bool two;
};