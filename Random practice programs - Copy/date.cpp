//4/2/2014. 
#include<iostream>
using namespace std;
class Date{ 
     private: 
     	int date;
     	int month;
     	int year;
     public: 
     	Date(int date,int month,int year){
     		this->date = date;
     		this->month = month;
     		this->year = year;
		 }
		Display(){
			cout<<date<<'/';
			cout<<month<<'/';
			cout<<year;
		}
 }; 
 int main(){	
 
 		int dat;
 		int mon;
 		int yer;
 		cout<<"The data of the calander is given below:"<<endl;
 		cout<<"write the date = ";
 		cin>>dat;
 		cout<<"write the month = ";
 		cin>>mon;
 		cout<<"write the year = ";
 		cin>>yer;
 		
 		Date obj (dat,mon,yer);
 		obj.Display();
 	
 	return 0;
 }