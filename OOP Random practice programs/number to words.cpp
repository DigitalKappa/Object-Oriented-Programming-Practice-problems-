#include <iostream>
using namespace std;
int main() {
int a ;
cout<<"Write any number:";
cin>>a;
int One = 1;
int Two = 2;
int Thre = 3;
int Four = 4;
int Five = 5;
int Six = 6;
int Seven  = 7;
int Eight = 8;
int Nine = 9;
int Ten = 10;
int Eleven = 11;
int Twelve = 12;
int Thirteen = 13;
int Fourteen = 14;
int Fifteen = 15;
int Sixteen = 16;
int Seventeen = 17;
int Eighteen = 18;
int Ninten = 19;
int Twentee  = 20;
int Thirty = 30;
int Fourty = 40;
int Fifty = 50;
int Sixty = 60;
int Seventy = 70;
int Eightey = 80;
int Ninty = 90;
int Hundred = 100;

int q[3] ;
for(int i=0; i<5; i++){
   	 if(a>999&&a<99999){
        q[i] = a/1000;
        a = a%1000;
     } 
   	 if(a>99&&a<999){
    	q[i] = a/100;
    	a = a%100;
   	 }
  
		}
    cout<<a;
  
  
    
    
    return 0;
}