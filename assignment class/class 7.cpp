//	Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length 
//and breadth as parameters of its constructor and having a function named 'returnArea' which returns the area 
//of the rectangle. Length and breadth of the rectangle are entered through keyboard.

#include <iostream>
using namespace std;
class Area{
	private:
		double length;
		double width;
	public:
		Area(double len, double wid);
		double returnArea();
		
};

	Area::Area(double len, double wid){
	    length = len;
		width = wid;
	}

	double Area::returnArea(){
		return length * width;
	}
	
int main(){
	int a,b;
	cout<<"Write the length = ";
	cin>>a;
	cout<<"Write the width = ";
	cin>>b;
	
	Area obj(a,b);
	cout<<"The area = "<<obj.returnArea()<<endl;
	
	return 0;
}