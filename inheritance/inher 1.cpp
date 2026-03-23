//	Create a base class called Shape with two data members: width and height, and a virtual function area() to calculate the area.
// Derive two classes Rectangle and Triangle from Shape and implement the area() function for each.
#include<iostream>
using namespace std;

class Shape{
	protected:
		double width;
		double length;
	public:
		Shape(double l , double w){
			length = l;
			width = w;
		}
		virtual double area() = 0;
		void Display(double res){
			cout<<"The area is = "<<res<<endl;
		}
};

class Triangle : public Shape{
	public:
		Triangle(double le , double wi) : Shape (le , wi){
		}
		double area() override{
			double result;
			result = length * width ;
			result = result/2;
			return result;
		}
};

class Rectangle : public Shape{
	public:
		Rectangle(double leng , double widt) : Shape (leng , widt){
		}
		double area() override{
			double final;
			final = length * width ;
			return final;
		}
};

int main(){
	double len, wid;
	cout<<"Write the lenght = ";
	cin>>len;
	cout<<"Write the width = ";
	cin>>wid;

	Triangle obj(len , wid);
	
	double f1 = obj.area();
	cout<<"The area of the Triangle :"<<endl;
	obj.Display(f1);
	
	Rectangle obj1(len , wid);
	
	double f2 = obj1.area();
	cout<<"The area of the Rectangle :"<<endl;
	obj1.Display(f2);
	
	return 0;
}