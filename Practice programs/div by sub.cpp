#include<stdio.h>
int division(int , int);
int subtraction(int , int);

int main(){
	int result ;
	int a;
	int b;
	scanf("%d",&a);
	printf("/\n");
	scanf("%d",&b);
	if(a>b){
		result = division(a,b);
	}
	
	if(a<b){
		result = division(b,a);
	}
	
	printf("The remainder is = %d",result);
	return 0;
}
int division(int d, int e){
	int div;
	div = subtraction(d,e);
	return div;
    }   

int subtraction(int x , int y ){
	 	int step;
		while(x>=y){
			x = x - y; 
			step++;
		}
		printf("The quotient is = %d\n",step);
		return  x;
	}
