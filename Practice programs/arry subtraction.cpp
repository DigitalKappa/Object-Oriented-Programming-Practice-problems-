#include<stdio.h>

int* subtraction(int c[], int d[]);
int res[5] ;

int main(){
	int a[5],b[5],*ptr;
	
	printf("Write the elements of the first array:\n");
	for(int i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	
	printf("Write the elements of the second array:\n");
	for(int i=0; i<5; i++){
		scanf("%d",&b[i]);
	}
	
	 ptr = subtraction(a, b);
	printf("The final array after subtraction is:\n{");
	for(int i=0; i<5; i++){
     printf("%d,",(ptr+i));
}
	printf("}");
	return 0;
}
int* subtraction(int c[], int d[]){
	  for(int i=0; i<5 ; i++){
	  	res[i] = c[i] - d[i];
	  }
	  return res;
}
