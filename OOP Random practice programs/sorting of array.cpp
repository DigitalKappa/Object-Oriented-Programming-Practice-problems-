// sorting f the array.
#include<stdio.h>
int main(){
	int a[10] = {12,3,6,7,9,10,16,18,11,19};
	int temp = 0;
	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
		    	if(a[i]>a[j]){
		    		temp= a[i];
		    		a[i] = a[j];
		    		a[j] = temp;
				}
		}
	}
	  printf("The array after sorting is = ");
	   for(int c=0; c<10; c++){
	     printf("%d,",a[c]);
	   } 
	return 0;
}