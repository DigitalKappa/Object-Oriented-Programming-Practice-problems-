/*#include<iostream>
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
	cout<<"Write the marks 1 = ";
	cin>>mark1;
	cout<<"Write the marks 2 = ";
	cin>>mark2;
	cout<<"Write the marks 3 = ";
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
	int size;
	cout<<"Write the number of students that data you want to get =  ";
	cin>>size;
	
	Student obj[size];
	for(int i=0; i<size; i++){
		cout<<"Student "<<i+1<<endl;
		obj[i].input();
		cout<<"The sum of all marks = "<<obj[i].sum()<<endl;
		cout<<"The average of all marks = "<<obj[i].avg()<<endl;
	}
	return 0;
}
*/
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
	cout<<"Write the marks 1 = ";
	cin>>mark1;
	cout<<"Write the marks 2 = ";
	cin>>mark2;
	cout<<"Write the marks 3 = ";
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
	int size;
	cout<<"Write the number of students that data you want to get =  ";
	cin>>size;
	
	Student* obj = new Student [size];
	for(int i=0; i<size; i++){
		cout<<"Student "<<i+1<<endl;
		obj[i].input();
		cout<<"The sum of all marks = "<<obj[i].sum()<<endl;
		cout<<"The average of all marks = "<<obj[i].avg()<<endl;
	}
	delete obj;
	return 0;
}

