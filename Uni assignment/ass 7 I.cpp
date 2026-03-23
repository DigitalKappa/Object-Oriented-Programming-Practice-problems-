#include<iostream>
using namespace std;
void div();
int main(){
	 div();
	 return 0;
}
void div(){
	for(int i=20; i>=1 ; i--){
		if(i%3==0)
		cout<<"The number "<< i <<" is divisible by 3."<<endl;
		if(i%5==0)
		cout<<" \t\t\t The number "<< i <<" is divisible by 5."<<endl;
	}
}