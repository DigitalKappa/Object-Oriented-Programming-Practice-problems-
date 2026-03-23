#include<iostream>
using namespace std;
int main(){
	int a = 100;
	int result[3] = {0};
	int c = 0;
	for( a = 100 ; a>0 ; c++ ){
	result[c]= a%16;
	a = a/16;
	 result[c]<<',';
	}

	for( c = 2; c>=0 ; c--){
		cout<<result[c]<<',';
	}
 return 0;
}