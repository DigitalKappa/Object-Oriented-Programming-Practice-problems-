#include<stdio.h>

int multiplication(int , int);
int addition(int , int);

int main(){
	int result ;
	int a;
	int b;
	scanf("%d",&a);
	printf("*\n");
	scanf("%d",&b);
	
	result = multiplication(a,b);
	printf("The product of two numbers is = %d",result);
	
	return 0;
}
int multiplication(int d , int e ){
	int mul;
	mul = addition(d , e);
      
	return mul;
}

   int addition(int x , int y){
		int res = 0;
		for(int i=0; i<x ;i++){
			res = res + y ; 
		}
		 
	return  res;	
}