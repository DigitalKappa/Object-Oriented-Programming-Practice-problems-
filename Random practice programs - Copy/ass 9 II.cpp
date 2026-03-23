#include<iostream>
using namespace std;
int main (){
int result ;
int a ;
for(int i= 20; i>=2 ; i--){
		cout<<"The octal of "<<i<<" is = ";
	for(a=i; a!=0 ;){
	  result = a%8;
	  a = a/8;
	  cout<<result<<',';}
	  cout<<endl;
}
return 0;
}
