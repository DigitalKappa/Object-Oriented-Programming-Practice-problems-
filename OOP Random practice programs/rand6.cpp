#include<iostream>
#include<string.h>
using namespace std;
	class Student{
		private:
			string name;
			int roll_no;
			int marks[6];
		public:
			Student(string nam,int roll,int marks[6]);
			void totalnumber(int sum);
			void Display(string nam,int rol);
	};
	
	Student(string nam,int roll,int marks[6]){
		name = nam ; 
		roll_no = roll ;
		for(int i=0; i<6; i++){
			
		}
	}
	
	void Student::totalnumber(int sum){
		double percentage;

		percentage = (double)sum/600*100;
	    cout<<"Total marks = "<<sum<<endl;
		cout<<"Percentage = "<<percentage<<endl;
	}
	
	void Student::Display(string nam,int rol){
		cout<<"Name = "<<nam<<endl;
		cout<<"Roll number = "<<rol<<endl;

	}
	
int main(){
	int n;
	cout<<"How much students data you want to enter = ";
	cin>>n;
	
	Student obj[n];
	int total  = 0;
	string namm;
	int roll;
	int makk[6];
	for(int i=1; i<=n; i++){
		total = 0;
		cout<<"Enter the detail of the Student "<<i<<endl;
		cout<<"Write your name = ";
		cin>>namm;
		cout<<"Write your roll number = ";
		cin>>roll;
		for(int j=1; j<=6; j++){
			cout<<"Enter the marks of subject no "<<j<<". out of 100. = ";
			cin>>makk[j];
			total  = total + makk[j];
		}
		
		obj[i].Display(namm,roll);
		obj[i].totalnumber(total);
	}
	
	
	return 0;
}