#include<iostream>
using namespace std;
void octal();
int main(){
	 octal();
	 return 0;
}
void octal(){
	int result = 0;
	for(int i=2; i<=20 ; i++){
		cout<<"The octal of "<<i<<" is: ";
	   for( int a=i; a!=0 ; ){
	         result = a%8;
	         cout<< result<<',';
			  a = a/8;
	     	} 
		 cout<<endl; 
	}
}