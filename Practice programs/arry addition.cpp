#include<stdio.h>

int* addition(int ar1[], int ar2[]);
int f[5];
int main(){
	int arr1[5] , arr2[5] , *ptr;
	printf("Write the values of the first array:\n");
	for(int i=0; i<5; i++){
			scanf("%d",&arr1[i]);
	}

	printf("Write the values of the second array:\n");
	for(int i=0; i<5; i++){
			scanf("%d",&arr2[i]);
	}
		
	 	  ptr =  addition(arr1 , arr2 );
	
	printf("The addition of the two array is given as:\n{ ");

	for(int i=0; i<5 ; i++){
	 	   printf("%d,",ptr[i]);
	}

	printf(" }");
	return 0;
}
int* addition(int ar1[], int ar2[] ){
	for(int i=0; i<5; i++){
		f[i] = ar1[i] + ar2[i];
	}
	return f;
}