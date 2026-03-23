#include<iostream>
using namespace std;
class Rectangle{
	public:
		double length;
		double width;
	public:
		Rectangle(){
			cout<<"Default constructor.."<<endl;
			length = 10;
			width = 20;
			cout<<"Length = "<<length<<endl;
			cout<<"Width = "<<width<<endl;
		}
		
	/*	Rectangle( Rectangle &obj){
			cout<<"Copy constructor.."<<endl;
			length = obj.length;
			width = obj.width;
			cout<<"Length = "<<length<<endl;
			cout<<"Width = "<<width<<endl;	
		}
		*/
		~Rectangle(){
			cout<<"Destructor callled.."<<endl;
		}
};

int main(){
//	Rectangle *ptr = new Rectangle();
//	ptr->length = 20;
//	Rectangle obj = *ptr;
//	Rectangle *ptr2 = new Rectangle();

	Rectangle obj;
	Rectangle *obj2 = &obj;
	
	obj.width = 50;
	cout<<obj2->length<<endl;
	cout<<obj2->width<<endl;
	
	cout<<obj2->length<<endl;
	cout<<obj2->width<<endl;
	obj =  Rectangle();
	//delete ptr;
	//delete ptr2;
	return 0;
}