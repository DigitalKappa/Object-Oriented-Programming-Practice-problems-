//Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions
// for each operation whose real and imaginary parts are entered by the user.
#include<iostream>
using namespace std;
class Complex{
	public:
		void Sum(double r1, double i1 , double r2, double i2);
		void Difference(double r1, double i1 , double r2, double i2);
		void Multiplication(double r1, double i1 , double r2, double i2);
	};
	
	void Complex::Sum(double r1, double i1 , double r2, double i2){
		double real;
		double imaginary;
		real = r1+r2;
		imaginary = i1+i2;
		cout<<"The Addition of  "<<'('<<r1<<","<<i1<<"i"<<')'<<'+'<<'('<<r2<<','<<i2<<"i"<<") = "<<real<<','<<imaginary<<'i'<<endl;
	}
	
	void Complex::Difference(double r1, double i1 , double r2, double i2){
		double real ;
		double imaginary ;
		real = r1-r2;
		imaginary = i1-i2;
		cout<<"The Subtraction of  "<<'('<<r1<<","<<i1<<"i"<<')'<<'-'<<'('<<r2<<','<<i2<<"i"<<") = "<<real<<','<<imaginary<<'i'<<endl;
	}
	
	void Complex::Multiplication(double r1, double i1 , double r2, double i2){
		double real;
		double imaginary;
		real = (r1*r2)-(i1*i2);
		imaginary = (r1*i2)+(i1*r2);
		cout<<"The Multiplication of  "<<'('<<r1<<","<<i1<<"i"<<')'<<'*'<<'('<<r2<<','<<i2<<"i"<<") = "<<real<<','<<imaginary<<'i'<<endl;
	}
	
int main(){
	double a,b,c,d;
	cout<<"Write the complex number = "<<endl;
	cin>>a;
	cout<<",";
	cin>>b;
	cout<<"Write the other complex number = "<<endl;
	cin>>c;
	cout<<",";
	cin>>d;
	Complex obj;
    obj.Sum(a,b,c,d);
    obj.Difference(a,b,c,d);
    obj.Multiplication(a,b,c,d);
    
    return 0;
}