#include<iostream>
using namespace std;
void numb();
int main(){
	 numb();
	 return 0;
}
void numb(){
	cout<<"The Even number are given below:"<<endl;
	for(int i=20; i>=1 ; i--){
		if(i%2==0){
		cout<<i<<',';
	   }
	}
}