#include<iostream>
using namespace std;
class Parent{
	protected:
		string color;
	public:
		Parent(string col ){
			color = col;
		}
		void display(){
			cout<<"The color is = "<<color<<endl;
		}
};

class Teacher{
	protected:
		int exp;
	public:
		Teacher(int ex){
			exp = ex;
		}
		void displayT(){
			 cout<<"The exp is = "<<exp<<endl;
		}
};

class Employee{
	
	protected:
		int height ;
	public:
		Employee(int heig){
			height = heig;
		}
		void displayE(){
			cout<<"The height is = "<<height<<endl;
		}
};

class Vella: public Parent , public Teacher, public Employee{
	private :
		int age ;
	public:
		Vella(string col, int ex , int heig , int ag) :  Parent(col) ,  Teacher(ex) ,  Employee(heig){
			age = ag;
		}
		void Display(){
				cout<<"The age is = "<<age<<endl;
		}
};

int main(){
	Vella obj("BLue", 5 , 6 , 24);
	obj.display();
	obj.displayT();
	obj.displayE();
	obj.Display();
	return 0;
}
