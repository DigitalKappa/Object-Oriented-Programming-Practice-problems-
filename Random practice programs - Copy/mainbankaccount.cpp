#include "Bankaccount.h"
#include <iostream>
using namespace std;
int main(){
	Bankaccount obj;
	cout<<"Welcome to the Banking Management System..."<<endl;
	cout<<endl;
	obj.openaccount();
	
	cout<<"Your account is successfuly opened............"<<endl;
	code:
	cout<<"Select the one option from below"<<endl;

	cout<<"1. Want to deposit money . "<<endl;
	cout<<"2. Want to withdraw money ."<<endl;
	cout<<"3. Dispaly account details."<<endl;
	cout<<"4. EXIT."<<endl;
	int a;
	cout<<"Write your particular option = ";
	cin>>a;

	switch(a){
		case 1:
			obj.deposit_money();
			break;
		case 2:
			obj.withdraw_money();
		case 3:
			obj.account_details();
			break;
		case 4:
			cout<<"Thank you.......";
			return 0;
			break;
		default:
			cout<<"Invalid input ...";
	}
	goto code;
	
	return 0;
}
