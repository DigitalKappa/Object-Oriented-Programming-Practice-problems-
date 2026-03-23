#include<iostream>
using namespace std;
int main(){
	int a[8] = {0,0,1,0,0,1,1,0};
	int result = 0;
	for(int i=0; i<8 ; i++){
			int power = 0;
		    if(a[i]==1)
			{ 
	    	power = 1;
			for(int x=1; x<=i ; x++){
	         power = power * 2;}
			} 	 
		result = result + power;
							} 
	int final[3];
	int v = 0;
	cout<<"The decimal of binary is = "<<result<<endl;
	
	cout<<"The octal of "<<result<<" is = ";
	
	  for(int c=result; c!=0 ;v++){
	     final[v] = c%8;
	     c = c/8;}
	     for(v=2; v>=0 ; v--){
	     cout<<final[v]; 
	 

	}
  	return 0;
}