#include<iostream>
using namespace std;
void numb();
int main(){
	 numb();
	 return 0;
}
void numb(){
	cout<<"The Odd number are given below:"<<endl;
	for(int i=20; i>=1 ; i--){
		if(i%2==1){
		cout<<i<<',';
	   }
	}
}