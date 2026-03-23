#include<iostream>
using namespace std;
int main (){
int result ;
int a ;
for(int i= 2; i<=20 ; i++){
		cout<<"The hexadecimal of "<<i<<" is = ";
	for(a=i; a!=0 ;){
	  result = a%16;
	  a = a/16;
	  cout<<result<<',';}
	  cout<<endl;
}
return 0;
}
