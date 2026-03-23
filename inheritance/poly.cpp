#include<iostream>
using namespace std;

class Animal{
	protected:
		string name;
	public:
		virtual void getname() = 0;
};

class Cat : public Animal{
	public:
		Cat(string n){
			name = n;
		}
		void getname() override{
			return name;
		}
};

class Dog : public Animal{
	public:
		Dog(string n){
			name = n;
		}
		void getname() override{
			return name;
		}
		
};

int main{
	Animal *ptr;
	Cat obj("Tom");
	Dog obj1("Sheroo");
	ptr = &obj;
	cout<<ptr->getname();
	ptr = &obj1;
	cout<<ptr->getname();
	return 0;

}