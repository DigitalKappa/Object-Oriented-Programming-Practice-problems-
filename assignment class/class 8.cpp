//Print the average of three numbers entered by the user by creating a class named 'Average' having a function 
//to calculate and print the average without creating any object of the Average class.
#include<iostream>
using namespace std;
class Average{
	public:
		static void function(double d, double e, double f);
	private:
		static	void  DisplayArea(double );	
		
};

	void Average::function(double d, double e, double f){
	    double result = d+e+f;
		result = result /3;
	    DisplayArea(result);
	}

	void Average::DisplayArea(double final){
	cout<<"The average is = "<<final;
	}
	
int main(){
	double a1,b1,c1;
	cout<<"Write the first number = ";
	cin>>a1;
	cout<<"Write the second number = ";
	cin>>b1;
	cout<<"Write the third number = ";
	cin>>c1;
	
Average::function(a1,b1,c1);
	
	return 0;
}