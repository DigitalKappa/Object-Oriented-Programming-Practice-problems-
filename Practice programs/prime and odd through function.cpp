//Programme that check prime and odd from 1 to 50 by using function through pointer..
#include<iostream>
using namespace std;
void function(int*);
int main(){
	int b;
	printf("Write the number = ");
	scanf("%d",&b);
	
	function(&b);
	
	return 0;
}
void function(int *y){

	for(int b=1; b<=*y; b++){
			int count = 0;
		for(int c=2; c<b ; c++){
			if(b%c==0){
				count++;
			}
			c++;
		}
			if(count==0){
				printf("The number %d is prime.\n",b);
			}
			if(b%2!=0){
				printf("The number %d is odd.\n",b);
			}	
			
	}
}
