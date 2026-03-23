#include<iostream>
using namespace std;
class Result{
	public:
		int rollno;
		string name ;
		int mark[3];
	private:
		void show(){
				cout<<"The roll number = "<<rollno<<endl;
				cout<<"The name = "<<name<<endl;
			for(int i=0; i<3; i++){
		 		cout<<"The marks of subject "<<i+1<< " is ";
		 		cout<<mark[i];
		 		 cout<<endl;
			}
		}
		int avg()const{
				int average;
			for(int i=0; i<3; i++){
				average = average + mark[i];
			}
				average = average / 3;
				return average ;
		}
		
	public:
			void input();
			int total()const;
			int averg();
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
			 	show();
		}
		
//The  total() function returns the total marks of a student.
		int Result::total()const{
				int final = 0 ;
			for(int i=0; i<3; i++){
				final = final + mark[i];
			}
				return final;
		}
		
		int Result::averg(){
			int final;
				final = avg();
				return final;
		}


int main(){
	Result obj;
	int avgr;
	int tootal;
	obj.input();
	avgr = obj.total();
	cout<<"The total marks are = "<<avgr<<endl;
	tootal = obj.averg();
	cout<<"The average marks are = "<<tootal;

	
	return 0;
} 