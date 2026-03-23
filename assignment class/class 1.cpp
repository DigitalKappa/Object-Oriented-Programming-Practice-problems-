         //create a class name student with the string name and integer variable roll ny=umber . Assign the value of roll number as 2 and name as jaohn by creating an bobet in the main..
#include<iostream>
#include<string.h>
using namespace std;
class Student{
	private:
		string name;
		int roll_no;
	public:
		void Set(string nam, int roll);
		void Display();
};
	void Student::Set(string nam, int roll){
			name = nam;
			roll_no = roll;
	}
	void Student::Display(){
		cout<<"THE NAME IS = "<< name<<endl;
		cout<<"THE ROLL NO IS = "<< roll_no<<endl;
	}
	
int main(){
	Student obj;
	obj.Set("Humais",1214);
	obj.Display();
	return 0;
}