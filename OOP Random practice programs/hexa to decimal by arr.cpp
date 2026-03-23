#include<iostream>
using namespace std;
int main(){
	int B = 11;
	int E = 14;
	int arr[3]= {B,E,1};
	int power = 1;
	int result ;
	int sum = 0;
	int i;
	for( i=0; i<3 ; i++){
		power = 1;
		for(int a=0; a<i ; a++){
			 power = power * 16;
	    }
				result = power * arr[i];
         	    sum = sum + result;
	}
	            cout<<sum;
	    
	return 0;
}