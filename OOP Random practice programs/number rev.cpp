#include<iostream>
using namespace std;
int main(){
	int a ;
	cout<<"WRITE THE NUMBER:";
	cin>>a;
	int result[5];
	for(int i=0; i<5; i++){
		if(a>0){
	  result[i] = a%10;
	   a = a/10;
	  cout<<result[i];
       }
	 }
	 for(int c=4 ; c>=0 ; c--){
	 cout<<result[c]<<',';
}
		return 0;
}