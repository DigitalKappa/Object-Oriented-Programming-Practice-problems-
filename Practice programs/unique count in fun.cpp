#include<stdio.h>

int unique(char [] );
int coounnt(char [] );

int main(){  
	char num[20];
	int result;
  
	printf("Write any string = ");
	scanf(" %[^\n]",num);
   
	result = unique(num);
	
	printf("The total number of unique count in the string is  = %d",result);
	return 0;
}
int unique(char num[] ){
	int count = 0;
	int final = 0;
	int b;
	
	b = coounnt(num);
	
	for(int i=0; i<b; i++){
	 	 count = 0;
	 	if(num[i]!=' '){
	 	 for(int j=i+1; j<b; j++){
		   	if(num[i]==num[j]){
		   		count++;
		   		break;
	   		}
	   	}
	   	if(count==0){
	   	  for(int j=i-1; j>=0; j--){
		   	 if(num[i]==num[j]){
		   		count++;
		   	 	 break;
	   		}
		  }
	   }
	
       if(count==0)
		 final++;	
	   }
	}
	return final;
}
int coounnt(char num[]){
	int totaal;
	while(num[totaal]!='\0'){
		totaal++;
	}
	return totaal;
}