//Create two classes ClassA and ClassB.
//Make a friend function that can access private members of both classes and print their values.
#include<iostream>
using namespace std;
class B;

class A{
	private:
		int a ;
	public:
		A(int x){
			a = x;
		}
		friend void Display( A , B );
};

class B{
	private:
		int b ;
	public:
		B(int y){
			b = y;
		}
	friend void Display( A , B );
};

void Display( A  s, B  v){
	int sum;
	sum = s.a + v.b ;
	cout<<"The Sum = "<<sum;
}

int main(){
	A obj(10);
	B obj1(20);
	
	Display(obj , obj1);
	return 0;
}