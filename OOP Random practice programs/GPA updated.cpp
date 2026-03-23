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

 class SemesterResult{
 	    private:
 	    	int credit[10];
 	    	int subject;
 	    	double gpascore[8];
 	    	int marks[10];
 	    public:
 	    	double Getinfoo(int n, int b);
 	    	void grade(double);
 	    	void Displaytable(SemesterResult obj2[]);
 	    	int getSubjectCount() {
			   		 return subject;
			}

			int getCreditSum() {
			    int total = 0;
			    for (int i = 0; i < subject; i++) {
			        total += credit[i];
			    }
			    return total;
			}
 	    	
 };
	
	void Degreeresult::Getinfo(){
		string name , roll;
			cout<<"Write your name = ";
			cin>>name;
			cout<<"Write your roll number = ";
			cin>>roll;
			cout<<endl;
			Stroll = roll;
			Stname = name;
	}

	void Degreeresult::Display(){
			cout<<"Student Name  = "<<Stname<<endl;
			cout<<"Student Roll no = "<<Stroll<<endl;
			cout<<endl;
	}

	double SemesterResult::Getinfoo(int n,int b){
		
	if(b==0){
		int marksum = 0 ;
		int creditsum = 0;
		cout <<"Number of Subjects = ";
        cin >> subject;
        double gpa = 0;
		double sub[10] ;
	
        for(int i = 0; i < subject; i++) {
            cout << "Credit Hour " << ": ";
            cin >> credit[i];
            creditsum = creditsum + credit[i];

            cout << "Marks  " << ": ";
            cin >> marks[i];
            marksum = marksum + marks[i];
        }
        
      //  for (int i = 0; i < 10; i++) {
      //  		cout << "\033[F" << "\033[2K"; 
   // }
        cout << "\n| Subject | Credit Hour  | Marks |\n";
        for (int i = 0; i < subject; i++) {
            cout << "|   " << setw(3) << i + 1
                 << "   |     " << setw(5) << credit[i]
                 << "    |  " << setw(4) << marks[i] << " |\n";
        }
        cout<<endl;
 
 		
				for(int i=0; i<subject; i++){
					if(credit[i]==2){
						sub[i] = (double(marks[i])/40)*4;
					}
					else if(credit[i]==3){
						sub[i] = (double(marks[i])/60)*4;
					}
				    else
						sub[i] = (double(marks[i])/80)*4;
						
				}
					
				for(int i=0; i<subject; i++){
					if(credit[i]==2)
						gpa = gpa + (sub[i]*2);
					else if(credit[i]==3)
						gpa = gpa + (sub[i]*3);
					else 
						gpa = gpa + (sub[i]*4);
				}
					gpascore[n] = gpa/creditsum;
					
				cout<<"The GPA  = "<< fixed << setprecision(2)<<gpascore[n]<<endl;
				cout<<endl;
			}
		else
				return gpascore[n];
        
    }
    
    void SemesterResult::Displaytable(SemesterResult obj2[]){
		double gpa;
		cout<<setw(6)<<"     Semester    "<<setw(6)<<"  |No. of Subjects"<<setw(6)<<"|  Credit Hour  "<<setw(6)<<"| GPA |"<<endl;
		cout<<" _____________________________________________________________"<<endl;
		for(int i=0; i<8; i++){
			gpa = obj2[i].Getinfoo(i,1);
			cout<<setw(6)<<"  Semester no "<<i+1<<setw(6)<<"    |       "<<obj2[i].getSubjectCount()<<"  	   "<<setw(6)<<"|     "<<obj2[i].getCreditSum()<<"   "<<setw(6)<<"|"<< fixed << setprecision(2) <<gpa<<"|"<<endl;
		}
		cout<<" _____________________________________________________________"<<endl;
	}
    
    void SemesterResult::grade(double ccgpa){
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
		
	int main(){
	double cgpa = 0;
		Degreeresult obj1;
		SemesterResult obj2[8];
		SemesterResult obj3;
		obj1.Getinfo();
		for(int i=0; i<8; i++){
		cout<<"Data of the Semester "<<i+1<<endl;
		cout<<endl;
        	obj2[i].Getinfoo(i,0);
        	cgpa  = cgpa +	obj2[i].Getinfoo(i,1);
        	system("pause");
        	system("cls");
		}
		
		cgpa = cgpa/8;
		system("cls");
		obj1.Display();
		obj3.Displaytable(obj2);
		cout<<endl;
		cout<<"The Final CGPA is = "<<cgpa<<endl;
		obj3.grade(cgpa);
		
		return 0;
		
	}

