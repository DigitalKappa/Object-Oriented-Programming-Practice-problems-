#include<stdio.h>
int uniquecount(char[] , char[]);
int stringcount(char[]);

int main(){
	char str[50];
	char cmp[15];
	int final;
	
	printf("Write the string = ");
	scanf(" %[^\n]",str);
	printf("Write the unique word you want to find in your string = ");
	scanf(" %[^\n]",cmp);
	
	final = uniquecount(str,cmp);
	
	printf("The total number of unique count in the string is  = %d",final);
	
	return 0;
}

int uniquecount(char str[] , char cmp[]){
	
	int n1 = stringcount(cmp);
	int n2 = stringcount(str);
	
	int total = 0;
	int step = 0;

			for(int j=0; j<n2-n1+1;j++){
				for(int k=0; k<n1;k++){
					if(str[j]!=' '){
						if(str[j+k]==cmp[k]){
						        step++;

						    if(step==n1){
						        total++;
						        step = 0;
						    }
						}
					else{
							step=0;
                            break;
						}		  				
				}
			}
		}
		return total;
}
int stringcount(char arr[]){
	int count = 0;
	while(arr[count] != '\0' ){
		count++;
	}
	return count;
}