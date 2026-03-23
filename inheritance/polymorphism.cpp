#include<iostream>
using namespace std;
class Animal{
	protected:
		string name;
		Animal(string n){
			name = n;
		}
	public:
		virtual string getname() = 0;
};

class Cat : public Animal{
	public:
		Cat(string n):Animal(n){
		}
		string getname() override{
			return name;
		}
};

class Dog : public Animal{
	public:
		Dog(string n):Animal(n){
		}
		string getname() override{
			return name;
		}
		
};

int main(){

	Cat obj("Tom");
	Dog obj1("Sheroo");
    cout<<obj.getname()<<endl;
	cout<<obj1.getname()<<endl;
	return 0;

}