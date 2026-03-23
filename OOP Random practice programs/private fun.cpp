#include<iostream>
#include<string.h>
using namespace std;
class Student{
	private:
		string name;
		int roll_no;
	private:	
		void Display(){
		cout<<"THE NAME IS = "<< name<<endl;
		cout<<"THE ROLL NO IS = "<< roll_no<<endl;
	}
	public:
		void Set(string nam, int roll);
};

	void Student::Set(string nam, int roll){
			name = nam;
			roll_no = roll;
			Display();
	}

int main(){
	Student obj;
	obj.Set("Humais",1214);
	return 0;
}