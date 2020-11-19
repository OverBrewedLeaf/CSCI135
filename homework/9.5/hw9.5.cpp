/*
Author Jeffrey Li
Professor Tong Yi

a rectangle class that computes area perimeter and 
*/
class Rectangle{
private:
	double w;
	double l;
public:
	Rectangle(double wi, double le){
		w = wi;
		l = le;
	}
	double get_perimeter(){
		return 2*(w+l);
	}
	double get_area(){
		return w*l;
	}
	void resize(double factor){
		w *= factor;
		l *= factor;
	}
};
