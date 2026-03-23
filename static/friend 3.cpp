//Create a class Rectangle with private members length and width.
//Define a friend function calculateArea(Rectangle r) that calculates and returns the area.
//Demonstrate it in main().

#include<iostream>
using namespace std;

class Rectangle{
	private:
		double length;
		double width;
	public:
		Rectangle(double l , double w){
			length = l;
			width = w;
		}
		friend double calculateArea(Rectangle r);
};

double calculateArea(Rectangle r){
	double area = r.length * r. width;
	return area;
}

int main(){
	double final;
	Rectangle obj(2.9 , 8.6);
	final = calculateArea(obj);
	cout<<"The area is = "<<final;
	return 0;
}