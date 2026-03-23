#include<iostream>
using namespace std;
class Result{
	public:
		int rollno;
		string name ;
		int mark[3];
	public:
		void input();
		void show();
		int total()const;
		int avg()const;
};

//The input() function is used to input the values in data members.
 void Result::input(){
 	cout<<"Write the roll number = ";
 	cin>>rollno;
 	cout<<"Write your name = ";
 	cin>>name;
 	for(int i=0; i<3; i++){
 		cout<<"Write the marks of subject "<<i+1<< " = ";
 		cin>>mark[i];
	 }
 }
 
//The show() function is used to display the values of data members.
void Result::show(){
	cout<<"The roll number = "<<rollno<<endl;
	cout<<"The name = "<<name<<endl;
	for(int i=0; i<3; i++){
 		cout<<"The marks of subject "<<i+1<< " is ";
 		cout<<mark[i];
 		 cout<<endl;
	 }
}

//The  total() function returns the total marks of a student.
int Result::total()const{
	int final = 0 ;
	for(int i=0; i<3; i++){
		final = final + mark[i];
	}
	return final;
}

//The avg() function returns the average marks of the student.
int Result::avg()const{
	int average;
	for(int i=0; i<3; i++){
		average = average + mark[i];
	}
	average = average / 3;
	return average ;
}

int main(){
	Result obj;
	int avgr;
	int total;
	obj.input();
	obj.show();
	avgr = obj.total();
	cout<<"The total marks are = "<<avgr<<endl;
	total= obj.avg();
	cout<<"The average marks are = "<<total;

	
	return 0;
} 