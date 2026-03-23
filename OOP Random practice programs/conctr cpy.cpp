#include<iostream>
using namespace std;
class Rectangle{
	public:
		double length;
		double width;
	public:
		Rectangle(){
			length = 10;
			width = 20;
			cout<<"Length = "<<length<<endl;
			cout<<"Width = "<<width<<endl;
		}
		
		Rectangle(const Rectangle &obj){
			length = obj.length;
			width = obj.width;
			cout<<"Length = "<<length<<endl;
			cout<<"Width = "<<width<<endl;	
		}
		
};
int main(){
	Rectangle ptr;
	ptr.length = 50;
	Rectangle ptr2(ptr);
	Rectangle ptr3;
	
	return 0;
}