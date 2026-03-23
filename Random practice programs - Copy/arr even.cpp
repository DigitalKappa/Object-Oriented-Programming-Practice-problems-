#include<iostream>
using namespace std;
int main(){
int a[5] = {2,5,8,12,9};
	for( int s = 0; s<4 ; ){
		s=s+2;
		cout<<a[s]<<',';
	}
	return 0;
}