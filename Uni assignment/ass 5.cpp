#include<iostream>
using namespace std;
void div();
int main(){
	 div();
	 return 0;
}
void div(){
	for(int i=1; i<=20 ; i++){
		if(i%3==0){
		cout<<"The number "<< i <<" is divisible by 3."<<endl;
	   }
	}
}