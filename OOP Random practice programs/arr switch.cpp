#include<iostream>
using namespace std;
int main(){
int a[5] ;
int sum ;
int pro = 1 ;
int avg ;
for( int i = 0 ; i<=4; i++){
	cout<<"Write the number = ";
	cin>>a[i];}
 int s ;
 cout<<"        DISPLAY MENU:"<<endl;
 cout<<"Press 1 to find sum of all numbers."<<endl;
 cout<<"Press 2 to find product of all numbers."<<endl;
 cout<<"Press 3 to find average of all numbers."<<endl;
 cout<<"Press any of above number = ";
  cin>>s;
 switch(s){
 	case 1:
 		for( int s = 0; s<5 ; s++){
 		 sum+=a[s];}
 		 cout<<"The sum of all the numbers is = "<<sum;
 		 break;
	 case 2:
	 	for( int s = 0; s<5 ; s++){
 		 pro*=a[s];}
 		 cout<<"The product of all the numbers is = "<<pro;
 		 break;
 	 case 3:
 	 	for( int s = 0; s<5 ; s++){
 		 avg+=a[s];}
 		avg= avg/5;
 		cout<<"The average of all the numbers is = "<<avg;
 		 break;
 	default:
 		cout<<"Enter any valid number";
 		break;
}
       return 0;
}