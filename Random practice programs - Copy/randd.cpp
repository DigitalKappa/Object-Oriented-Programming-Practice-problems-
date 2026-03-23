#include<iostream>
using namespace std;
class Parent{
	private:
		int id;
		string name;
	public:
		Parent(){
			cout<<"Parent Constructor called.."<<endl;
		}
};

class Student:public Parent{
	private:
		int roll_no;
	public:
		Student(){
			cout<<"child constructor";
		}
};

int main(){
	Student obj;

	return 0;
}