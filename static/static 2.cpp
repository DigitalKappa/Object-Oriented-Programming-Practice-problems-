//Create a class called Student that has:
//•	A static data member studentCount
//•	A constructor that increments studentCount
//•	A function to display the count of created student objects
//Write a main() function to create 3 objects and display the total number of students.
#include<iostream>
using namespace std;

class Student{
	private:
		static int studentCount;
	public:
		Student(){
			studentCount++;
		}
		void Display(){
			cout<<studentCount<<endl;
		}
};

int Student::studentCount = 0;

int main(){
	Student obj1;
	Student obj2;
	Student obj3;
	obj3.Display();
	return 0;
}