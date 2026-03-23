#include<iostream>
using namespace std;
void binary();
int main(){
	 binary();
	 return 0;
}
void binary(){
	int result = 0;
	for(int i=20; i>=2 ; i--){
		cout<<"The binary of "<<i<<" is:";
	   for( int a=i; a!=0 ; ){
	         result = a%2;
	         cout<<result<<',';
			  a = a/2;
	     	} 
		 cout<<endl; 
	}
}