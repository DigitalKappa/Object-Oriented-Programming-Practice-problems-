#include<bits/stdc++.h>
using namespace std;
int main(){
	int A,B;
	cin>>A;
	cin>>B;
	int a = 2;
	int count = 0;
	vector<int> arr;
	if(A<=B){
		int temp = A;
		while(temp<=B){
			for(int i=2; i<temp; i++){
				if(temp%i==0){
					count++;
					break;
				}
			}
			if(count==0){
				arr.push_back(temp);
			}
			temp++;
			count= 0;
		}
		
	
    long long total = 0;
    for (int x : arr) {
        total += (1LL * x * x * x) - (1LL * x * x) + x + 1;
    }
		
		cout<<total;
	}

	
	return 0;
	
}