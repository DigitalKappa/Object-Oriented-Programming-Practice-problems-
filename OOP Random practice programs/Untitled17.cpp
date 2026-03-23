#include<iostream>
using namespace std;
int main (){
	int n[5];
	cin>>n[0];
	cin>>n[1];
	cin>>n[2];
	cin>>n[3];
	cin>>n[4];
	
	for(int i=0;i<5;i++){
		cout<<endl<<n[i];
		cout<<endl<<&n[i];
	}
	return 0;
}