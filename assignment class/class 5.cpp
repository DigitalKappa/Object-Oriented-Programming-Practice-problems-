// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
#include <iostream>
using namespace std;
class Rectangle{
	private:
		double length;
		double width;
	public:
		Rectangle(double len, double wid);
		double area();
		
};
	double Rectangle::area(){
		return length * width;
	}
		
	Rectangle::Rectangle(double len , double wid){
		length = len;
		width = wid;
	}

int main(){
	 Rectangle obj(4,5);
	 cout<<"The area = "<<obj.area()<<endl;
	 Rectangle obj1(5,8);
	 cout<<"The area = "<<obj1.area()<<endl;
	return 0;
}