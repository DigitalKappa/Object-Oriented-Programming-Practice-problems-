#include<iostream>
using namespace std;
int main(){
	int a ;
	for( a = 1 ; a<=5 ; a++){
		for( int i = 1 ; i<=a ; i++){
			cout<<i<<',';
		}
		cout<<endl;
	}
	return 0;
}