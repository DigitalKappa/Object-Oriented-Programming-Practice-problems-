#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string.h>
using namespace std;

	class Degreeresult{
		private:
			string Stname;
			string Stroll;
		public:
			void Getinfo();
			void Display();
	};
	
	class markscalculator{
		private:
			int marks[5];
			double gpaStore[8];
		public:
			void Getinfoo();
			double result(int,int);
			double lastsem(int);
			void grade(double);
			void Displaytable(markscalculator obj2[]);
	};

	void Degreeresult::Getinfo(){
		string name , roll;
			cout<<"Write your name = ";
			cin>>name;
			cout<<"Write your roll number = ";
			cin>>roll;
		Stroll = roll;
		Stname = name;
	}

	void Degreeresult::Display(){
			cout<<"Student Name  = "<<Stname<<endl;
			cout<<"Student Roll no = "<<Stroll<<endl;
			cout<<endl;
	}

	void markscalculator::Getinfoo(){
		for(int i=0; i<3; i++){
			cout<<"Write the marks of the subject "<<i+1<<" having credit hour 3 = ";
			cin>>marks[i];
		}
			cout<<"Write the marks of the subject 4 having credit hour 2 = ";
			cin>>marks[3];
			cout<<"Write the marks of the subject 5 having credit hour 4 = ";
			cin>>marks[4];
		}
	double markscalculator::result(int n,int b){
		if(b==0){
			double gpa = 0;
			double sub[5] ;
				for(int i=0; i<3; i++){
					sub[i] = (double(marks[i])/60)*4;
				}
				    sub[3] = (double(marks[3])/40)*4;
					sub[4] = (double(marks[4])/80)*4;
					
				for(int i=0; i<3; i++){
					gpa = gpa + (sub[i]*3);
				}
					gpa = gpa + (sub[3]*2);
					gpa = gpa + (sub[4]*4);
					gpaStore[n] = gpa/15;	
					cout<<"The GPA  = "<< fixed << setprecision(2)<<gpaStore[n]<<endl;
					cout<<endl;
		}
		else
				return gpaStore[n];
	}
		
	double  markscalculator::lastsem(int b){
		static double lgpa = 0;
		
		if(b==0){
			double tot[2];
				cout<<"Write the marks of the subject 1 having credit hour 2 = ";
				cin>>marks[0];
				cout<<"Write the marks of the subject 2 having credit hour 4 = ";
				cin>>marks[1];
 				tot[0] = (double(marks[0])/40)*4;
				tot[1] = (double(marks[1])/80)*4;
					
				lgpa = lgpa + (tot[0]*2);
				lgpa = lgpa + (tot[1]*4);
				lgpa = lgpa/6;
				cout<<"The GPA  = "<< fixed << setprecision(2)<<lgpa<<endl;
		}
		else
			return lgpa;
	}
	
	void markscalculator::grade(double ccgpa){
		if(ccgpa>=3.67)
			cout<<"The grade is = A+.";
		else if(ccgpa>=3.34)
			cout<<"The grade is = A-.";
		else if(ccgpa>=3.01)
			cout<<"The grade is = B+.";
		else if(ccgpa>=2.67)
			cout<<"The grade is = B.";
		else if(ccgpa>=2.34)
			cout<<"The grade is = B-.";
		else if(ccgpa>=2.01)
			cout<<"The grade is = C+.";
		else if(ccgpa>=1.67)
			cout<<"The grade is = C.";
		else if(ccgpa>=1.31)
			cout<<"The grade is = C-.";
		else if(ccgpa>=1.01)
			cout<<"The grade is = D+.";
		else if(ccgpa>=0.10)
			cout<<"The grade is = D.";
		else 
			cout<<"The grade is = F(Fail).";
		
	}
	
	void markscalculator::Displaytable(markscalculator obj2[]){
		double gpa;
		cout<<setw(6)<<"     Semester    "<<setw(6)<<"  |No. of Subjects"<<setw(6)<<"|  Credit Hour  "<<setw(6)<<"| GPA |"<<endl;
		cout<<" _____________________________________________________________"<<endl;
		for(int i=0; i<7; i++){
			gpa = obj2[i].result(i,1);
			cout<<setw(6)<<"  Semester no "<<i+1<<setw(6)<<"    |       5  	   "<<setw(6)<<"|     15   "<<setw(6)<<"|"<< fixed << setprecision(2) <<gpa<<"|"<<endl;
		}
			gpa = obj2[7].lastsem(1);
			cout<<setw(6)<<"  Semester no 8"<<setw(6)<<"    |       2  	   "<<setw(6)<<"|     06   "<<setw(6)<<"|"<< fixed << setprecision(2) <<gpa<<"|"<<endl;
		cout<<" _____________________________________________________________"<<endl;
	}

int main(){
	double cgpa = 0;
			Degreeresult obj1;
			markscalculator obj2[8];
			markscalculator obj3;
			obj1.Getinfo();
			
		for(int i=0; i<7; i++){
			cout<<"Write the details of the "<<i+1<< " Semester:"<<endl;
			cout<<endl;
			obj2[i].Getinfoo();
			obj2[i].result(i,0);
			cgpa  = cgpa + obj2[i].result(i,1);
		}
		cout<<"Write the details of the 8th Semester:"<<endl;
			obj2[7].lastsem(0);
			cgpa = cgpa + obj2[7].lastsem(1);
			cgpa = cgpa/8;
			system("cls");
			obj1.Display();
			obj3.Displaytable(obj2);
		cout<<endl;
		cout<<"The Final CGPA is = "<<cgpa<<endl;
		obj3.grade(cgpa);

	return 0;
}
