//Create a class Employee with data members ID, name, salary. Use a parameterized constructor to initialize the values. Implement display() to show employee details.
#include<iostream>
using namespace std;
	class Employee{
		private:
			int ID ;
			string name;
			int salary;
		public:
			Employee(int ID ,string name , int salary );
			void display();
	};
 	Employee::Employee(int ID ,string name , int salary){
 		this->ID = ID;
 		this->name = name ;
 		this->salary = salary;
	 }
 	void Employee::display(){
 		cout<<"ID = "<<ID<<endl;
 		cout<<"Name = "<<name<<endl;
 		cout<<"Salary = "<<salary<<endl;
	 }
	 
int main(){
	int id;
	string name;
	int slaray;
	cout<<"Write the ID = ";
	cin>>id;
	cout<<"Write the Name = ";
	cin>>name;
	cout<<"Write the Salary = ";
	cin>>slaray;
	
	Employee obj(id,name,slaray);
	obj.display();
	
	return 0;
}