#include<iostream>
using namespace std;
void hexadecimal();
int main(){
	 hexadecimal();
	 return 0;
}
void hexadecimal(){
	int result = 0;
	for(int i=20; i>=1 ; i--){
		cout<<"The hexadecimal of "<<i<<" is: ";
	   for( int a=i; a!=0 ; ){
	         result = a%16;
	         cout<< result<<',';
			  a = a/16;
	     	} 
		 cout<<endl; 
	}
}