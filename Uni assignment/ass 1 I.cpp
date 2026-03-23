#include<stdio.h>
void prime();
int main(){
	prime();
	return 0;
}
void prime(){
	for(int i=20; i>=2 ; i--){
		int count = 0;
		for(int b=2; b<i ; b++){
			if(i%b==0){
			count++;}
		}
			if(count==0)
		    printf("The number %d is prime ",i);
		    if(i%2==1)
		    printf(" The number %d is odd\n",i);	
	}
}