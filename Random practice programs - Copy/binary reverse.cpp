#include<iostream>
using namespace std;
int main(){
	int a = 100;
	int result[8] ;
	int c = 0;
	for( a = 100 ; a>0 ; c++ ){
	result[c]= a%2;
	a = a/2;
	 result[c]<<',';
	}

	for( c = 7; c>=0 ; c--){
		cout<<result[c]<<',';
	}
 return 0;
}