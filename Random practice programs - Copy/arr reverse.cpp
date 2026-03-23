#include<iostream>
using namespace std;
int main(){
int a[5] ;
for( int i = 0 ; i<=4; i++){
	cout<<"Write the number = ";
	cin>>a[i];}
      for( int s = 4 ; s>=0 ; s--){
     	cout<<a[s]<<',';
}
       return 0;
}