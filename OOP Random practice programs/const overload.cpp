#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll_no;
		char grade;
	public:
		Student();
		Student(string name);
		Student(string name , int roll);
		Student(string name,int roll, char grade);
		Student(string name,char grade, int roll );
		void Display();
};

		Student::Student(){
			cout<<"constructor no 1:"<<endl<<endl;
			name = "HUMAIS";
			roll_no = 12345;
			grade = 'A';
		}
		
		Student::Student(string name){
			cout<<"constructor no 2:"<<endl<<endl;
			this->name = name;
			roll_no = 54321;
			grade = 'B';
		}
		
		Student::Student(string name , int roll){
			cout<<"constructor no 3:"<<endl<<endl;
			this->name = name;
			this->roll_no = roll;
			grade = 'C';
		}
		
		Student::Student(string name,int roll, char grade){
			cout<<"constructor no 4:"<<endl<<endl;
			this->name = name;
			this->roll_no = roll;
			this->grade = grade;
		}
		
		Student::Student(string name,char grade, int roll ){
			cout<<"constructor no 5:"<<endl<<endl;
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
	Student obj;
	obj.Display();
	Student obj1("Humais");
	obj1.Display();
	Student obj2("Daim",12146);
	obj2.Display();
	Student obj3("Haider",12256,'D');
	obj3.Display();
	Student obj4("Abdullah",'E',6464);
	obj4.Display();
	return 0;
}