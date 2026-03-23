#include<stdio.h>
int multiplication(int ar1[1][3], int ar2[3][1]);
int sum;

int main(){
	int arr1[1][3],arr2[3][1], ptr;
	
	printf("Write the values of the first vector:\n");
	for(int i=0; i==0; i++){
		for(int j=0; j<3; j++){
			scanf("%d",&arr1[i][j]);
	}
}
	printf("Write the values of the second vector:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j==0; j++){
				scanf("%d",&arr2[j][i]);
		}
	}
	ptr = multiplication(arr1 , arr2);
		
	printf("The multiplication of the two array is given as:\n{ %d }",ptr);
	
	return 0;
}
int multiplication(int ar1[1][3], int ar2[3][1]){
	for(int i=0; i==0; i++){
		for(int j=0; j<3; j++){
			sum += ar1[i][j] * ar2[j][i];	
			}
		}
	return sum;
}