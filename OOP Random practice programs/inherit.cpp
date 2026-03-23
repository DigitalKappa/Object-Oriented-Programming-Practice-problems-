#include<iostream>
#include<string.h>
using namespace std;

	class Person{
		protected:
			string name;
			int age;
		public :
			Person(string nam, int ag){
				name = nam;
				age = ag;
			}
			virtual void Displayinfo() = 0;
	};
	
	class Student: public Person{
		private:
			int Regno;
			string Degree;
		public:
			Student(string nam , int ag , int reg, string deg): Person(nam , ag){
				Regno = reg;
				Degree = deg;
			}
			void  Displayinfo() override{
				cout<<"name = "<<name<<endl;
				cout<<"Age = "<<age<<endl;
				cout<<"Registration no = "<<Regno<<endl;
				cout<<"Degree = "<<Degree<<endl;
			}
	};
	
	class Employe: public Person{
		private:
			int Id;
			double salary;
		public:
			 Employe(string nam, int ag , int id, double salar): Person( nam, ag){
				Id = id;
				salary = salar;
			}
			void  Displayinfo() override{
				cout<<"name = "<<name<<endl;
				cout<<"Age = "<<age<<endl;
				cout<<"ID = "<<Id<<endl;
				cout<<"Salary = "<<salary<<endl;
			}
			
	};

int main(){
 Student std1("Humais",19, 1838, "cs");
 std1.Displayinfo();
 Employe e1("Ali",25 , 2 ,50000);
 e1.Displayinfo();
 
	return 0;
}