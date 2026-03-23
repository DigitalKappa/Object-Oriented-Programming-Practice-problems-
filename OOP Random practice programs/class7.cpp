#include <iostream>
using namespace std ;
class person {
private:
	int age;
	int height;
public:
	person(){
			age = 20;
			height = 5;
		cout<<"Age = "<<age<<endl;
		cout<<"Height = "<<height<<endl;
	}
	person(int a){
			age = a;
			height = 6;
		cout<<"Age = "<<age<<endl;
		cout<<"Height = "<<height<<endl;
	}
	person(int ag,int h){
			age = ag;
			height = h ;
		cout<<"Age = "<<age<<endl;
		cout<<"Height = "<<height<<endl;
	}
};
	int main(){
		person obj1;
		person obj2(30);
		person obj3(4,5);

	return 0;
}