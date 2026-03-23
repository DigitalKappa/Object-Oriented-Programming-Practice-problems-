#include<iostream>
using namespace std;
int main(){
	int arr[4]= {4,5,7,3};
	int power = 1;
	int result ;
	int sum = 0;
	int i;
	for( i=0; i<4 ; i++){
		power = 1;
		for(int a=0; a<i ; a++){
			 power = power * 8;
	    }
				result = power * arr[i];
         	    sum = sum + result;
	}
	            cout<<sum;
	    
	return 0;
}