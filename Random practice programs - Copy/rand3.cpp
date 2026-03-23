// Create a Student class with name, rollNo, and marks as data members.Implement:Parameterized Constructor to initialize values.Copy Constructor to create a copy of an objectay() function to show details

#include<iostream>
#include<string.h>
using namespace std;
	class Student{
		private:
			string name;
			int roll_no;
			int marks;
		public:
			Student(string name , int roll_no , int marks);
			Student(Student &obj);
			void Display();
	};

	Student::Student(string name , int roll_no , int marks){
		this->name = name;
		this->roll_no = roll_no;
		this->marks = marks;
	}
	
	Student::Student(Student &obj){
		name = obj.name;
		roll_no = obj.roll_no;
		marks = obj.marks;
	}
	
	void Student::Display(){
		cout<<"Name = "<<name<<endl;
		cout<<"Roll no = "<<roll_no<<endl;
		cout<<"Marks = "<<marks<<endl;
	}
	
	int main(){
		string nam;
		int roll;
		int mark;
		cout<<"Write the name = "<<nam;
		cin>>nam;
		cout<<"Write the roll number = "<<roll;
		cin>>roll;
		cout<<"Write the marks = "<<mark;
		cin>>mark;
		
		Student obj(nam,roll,mark);
		obj.Display();
		Student obj1(obj);
		obj1.Display();
		return 0;
	}
	
