#include<iostream>
using namespace std;
int main(){
	int a[8] = {0,0,1,0,0,1,1,0};
	int result = 0;
	for(int i=0; i<8 ; i++){
			int power = 0;
		    if(a[i]==1){ 
	    	power = 1;
			for(int x=1; x<=i ; x++){
	         power = power * 2;}
		}
		result = result + power;
	
	} 
	     cout<<result;
  	return 0;
}