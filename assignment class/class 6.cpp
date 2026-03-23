//6. Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. 
//First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function
// named as 'getArea' returns the area of the rectangle.Length and breadth of the rectangle are entered through keyboard.
#include <iostream>
using namespace std;
class Area{
	private:
		double length;
		double width;
	public:
		void setDim(double len, double wid);
		double getArea();
		
};

	void Area::setDim(double len, double wid){
		length = len;
		width = wid;
	}

	double Area::getArea(){
		return length * width;
	}
	
int main(){
	int a,b;
	cout<<"Write the length = ";
	cin>>a;
	cout<<"Write the width = ";
	cin>>b;
	
	Area obj;
	obj.setDim(a,b);
	cout<<"The area = "<<obj.getArea()<<endl;
	return 0;
}