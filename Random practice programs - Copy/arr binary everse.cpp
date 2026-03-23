#include<iostream>
using namespace std;
int main (){
int a;
for(int i=1; i<=25 ; i++){
    	int result[8] = {0};
        int c = 0;
	cout<<"The binary of "<<i<<" is = ";
	for(int a=i ; a>0 ; c++ ){
	 	result[c] = a%2;
	     a = a/2;
	     result[c]<<','; 
		}
	for( c = 7; c>=0 ; c--){  
		cout<<result[c]<<',';
	}
        	 cout<<endl;
}
           return 0;
       }