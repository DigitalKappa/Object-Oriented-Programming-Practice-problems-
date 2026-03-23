//Create a class Box that has:
//•	A private data member length
//•	A friend function displayLength(Box b) that prints the length
#include<iostream>
using namespace std;

class Box{
	private:
		int length;
	public:
		Box(int a){
			length = a;
		}
		friend void displayLength(Box b);
};

void displayLength(Box b){
	cout<<"The length = "<<b.length;
}

int main(){
	Box obj(20);
	displayLength(obj);
	return 0;
}