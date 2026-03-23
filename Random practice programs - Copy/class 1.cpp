#include<iostream>
using namespace std;
class Student{
	public:
		double mark1;
		double mark2;
		double mark3;
	public:
		void  input();
		double sum()const;
		double avg()const;
};
void Student::input(){
	cout<<"Write the marks 1 = "<<endl;
	cin>>mark1;
	cout<<"Write the marks 2 = "<<endl;
	cin>>mark2;
	cout<<"Write the marks 3 = "<<endl;
	cin>>mark3;
}
double Student::sum()const {
	int result = mark1+mark2+mark3;
	return result;
}
double Student::avg() const{
	int average = mark1+mark2+mark3;
	average = average/2;
	return average;
}

int main(){
	Student obj;
	obj.input();
	cout<<"The sum of all marks = "<<obj.sum()<<endl;
	cout<<"The average of all marks = "<<obj.avg();
	return 0;
}

