#include<iostream>
using namespace std;
int main(){
    int i = 20;	
	if(i!=1){
	for( i = 20 ; i>=2 ; i--){
	    	int b = 2;
        	int count = 0;
	code:
			if(b<i){
			   if(i%b==0){ 
		 		count++;}
			    b++;
			goto code;
					}
			if(count==0)
		     	cout<<i<<" is Prime , ";
		    if(i%2!=0){
		    	cout<<i<<" is Odd."<<endl; } 	
			
     }
	}
	if(i==1){
		cout<<endl;
	    cout<<i<<" is Odd"<<endl;}
	 
	return 0;

}