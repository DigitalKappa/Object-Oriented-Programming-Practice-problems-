//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the constructor having the three sides as its parameters.
#include<iostream>
using namespace std;
class Triangle{
	private:
		double length;
		double width;
		double perpend;
	public:
        Triangle(double len, double wid, double per){
            length = len;
            width = wid;
            perpend = per;
        }
		double area(){
		    int final;
		    final = length * width;
		    final = final/2;
			return final;
		}
		double perimeter(){
			return length+width+perpend;
		}
	};
		
		int main (){
		    double A,P;
			Triangle obj(3,4,5);
			A = obj.area();
			P = obj.perimeter();
			cout<<"Area is  = "<<A<<endl;
			cout<<"Perimeter is =  "<<P<<endl;
			
			return 0;
		}