#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll_no;
		char grade;
	public:
		void Teacher();
		void Teacher(string name);
		void Teacher(string name , int roll);
		void Teacher(string name,int roll, char grade);
		void Teacher(string name,char grade, int roll );
		void Display();
};

		void Student::Teacher(){
			cout<<"Function no 1:"<<endl<<endl;
			name = "HUMAIS";
			roll_no = 12345;
			grade = 'A';
		}
		
		void Student::Teacher(string name){
			cout<<"Function no 2:"<<endl<<endl;
			this->name = name;
			roll_no = 54321;
			grade = 'B';
		}
		
		void Student::Teacher(string name , int roll){
			cout<<"Function no 3:"<<endl<<endl;
			this->name = name;
			this->roll_no = roll;
			grade = 'C';
		}
		
		void Student::Teacher(string name,int roll, char grade){
			cout<<"Function no 4:"<<endl<<endl;
			this->name = name;
			this->roll_no = roll;
			this->grade = grade;
		}
		
		void Student::Teacher(string name,char grade, int roll ){
			cout<<"Function no 5:"<<endl<<endl;
			this->name = name;
			this->grade = grade;
			this->roll_no = roll;
		}
		
		void Student::Display(){
			cout<<"Student = "<<name<<endl;
			cout<<"Roll number = "<<roll_no<<endl;
			cout<<"Grade = "<<grade<<endl<<endl;
		}
		

int main(){
	Student obj,obj1,obj2,obj3,obj4;
	
	obj.Teacher();
	obj.Display();
	
	obj1.Teacher("Humais");
	obj1.Display();
	
	obj2.Teacher("Daim",12146);
	obj2.Display();
	
	obj3.Teacher("Haider",12256,'D');
	obj3.Display();
	
	obj4.Teacher("Abdullah",'E',6464);
	obj4.Display();
	
	return 0;
}