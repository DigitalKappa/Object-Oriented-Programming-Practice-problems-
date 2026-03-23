//Write a class that contains two integer data members which are initialized to 100 when an object is created. It has a member function show that displays the data members.
#include<iostream>
using namespace std;
	class Random{
		public:
			int firstnumber = 100;
			int secondnumber = 100;
		public:
			void display();		
	};
	
	void Random::display(){
		cout<<firstnumber<<endl;
		cout<<secondnumber;
	}
int main(){
	Random obj;
	obj.display();
	return 0;
}