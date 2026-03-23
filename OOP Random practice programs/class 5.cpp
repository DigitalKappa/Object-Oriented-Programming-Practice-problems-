//Write a C++ program that defines an Employee lass with private attributes for employee ID, name, basic salary, and bonus. The program should allow input of details for two employees, calculate their total salaries (basic salary + bonus), and determine which employee has the higher total salary.
#include<iostream>
using namespace std;
class Employee {
	private:
		int employee_ID;
		string name ;
		int  basic_salary;
		int bonus;
	public:
		void set(int empid, string nme, int bassal, int bon);
		void show();
		int totalsalery();
};
	void Employee::set(int empid, string nme, int bassal, int bon){
		employee_ID = empid;
		name = nme;
		basic_salary = bassal;
		bonus = bon ; 
	}
	void Employee::show(){
		cout<<"The ID of the employ is = "<<employee_ID<<endl;
		cout<<"The name of the employ is = "<<name<<endl;
		cout<<"The basic salary of the employ is = "<<basic_salary<<endl;
		cout<<"Th bonus of the employ is = "<<bonus<<endl;
		
	}
	int Employee::totalsalery(){
		int total;
		total = basic_salary+bonus;
		return total;
	}


int main(){
	Employee obj1;
	Employee obj2;
	int total1;
	int total2;

	int id1;
	string nm1;
	int bss1;
	int bo1;
		int id2;
		string nm2;
		int bss2;
		int bo2;
	cout<<"Write the ID of the employ = ";
	cin>>id1;
	
	cout<<"Write the name of the employ = ";
	cin>>nm1;
	
	cout<<"Write the basic salary of the employ = ";
	cin>>bss1;
	
	cout<<"Write the bonus of the employ = ";
	cin>>bo1;
	cout<<endl;
	
	obj1.set(id1,nm1,bss1,bo1);
	obj1.show();
	
	total1 = obj1.totalsalery();
	cout<<"The total salery is = "<<total1<<endl;
	
	cout<<"Write the ID of the employ = ";
	cin>>id2;
	
	cout<<"Write the name of the employ = ";
	cin>>nm2;
	
	cout<<"Write the basic salary of the employ = ";
	cin>>bss2;
	
	cout<<"Write the bonus of the employ = ";
	cin>>bo2;
	cout<<endl;
	
	
	obj2.set(id2,nm2,bss2,bo2);
	obj2.show();
	
	total2 = obj2.totalsalery();
	cout<<"The total salery is = "<<total2<<endl;
	
	cout<<endl;
	if(obj1.totalsalery()>obj2.totalsalery()){
		 cout<<"The employ 1 has highest salery.."<<endl;
	}
	else 
		cout<<"The employ 2 has highest salery.."<<endl;
		
	return 0;
}