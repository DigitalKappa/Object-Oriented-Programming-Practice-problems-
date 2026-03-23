#include<iostream>
using namespace std;
int main(){
	int num = 1;
	int count = 5;
	int step = 5;
	int final;
	int total = 1;
	cout<<num<<" "<<endl;
	for(int i=1 ; i<6; i++){
		total = total + step;
		cout<<total<<" ";
		count = 5;
		final = total;
		for(int j=1; j<=i ;j++){
		    num = final - count;
		    cout<<num<<" ";
		    final = num;
		    count--;
		}
		cout<<endl;
		step--;
	}
	return 0;
}