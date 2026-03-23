#include<iostream>
using namespace std;
class Result{
	public:
		int rollno;
		string name ;
		int mark[3];		
	public:
		Result(int rol,string nm){
			rollno = rol;
			name = nm;
		
		}
		void input();
		void show();
		int total()const;
		int avg()const;
	};
	
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
 	
 	void Result::show(){
		cout<<"The roll number = "<<rollno<<endl;
		cout<<"The name = "<<name<<endl;
		for(int i=0; i<3; i++){
	 		cout<<"The marks of subject "<<i+1<< " is ";
	 		cout<<mark[i];
	 		 cout<<endl;
		 }
	}
	
int main(){
		Result obj(12345,"hazaal");
		obj.show();
		Result obj1 = obj;
		obj1.show();
		obj.name = "HumaisAli";
		obj.show();
		obj1.show();
	return  0;
}