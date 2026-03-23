#include<iostream>
#include "class I.h"

using namespace std;

void Bankaccount::openaccount(){
		cout<<"Write your account number = ";
		cin>>account_number;
		cout<<"Write your Complete name = ";
		cin>>account_holder_name;
		cout<<"Write your balance = ";
		cin>>balance;
		cout<<endl;
	}

	void Bankaccount::deposit_money(){
		int amount;
		cout<<endl;
		cout<<"How much money yo want to deposit =  ";
		cin>>amount;
	
		if(amount>0){
			balance = balance + amount;
			cout<<endl;
			cout<<"Your balance is added successfully."<<endl;
			cout<<"Now your balance is = "<<balance<<endl;
		}
		else {
			cout<<"Invalid input..."<<endl;
		}
	}
	
	void Bankaccount::withdraw_money(){
		int amount;
		cout<<endl;
		cout<<"Write the amount of cash you want to withdraw = ";
		cin>>amount;
		
		if(amount<=balance&&amount>0){
			balance =  balance - amount;
			cout<<endl;
			cout<<"Now your remaining balance is = "<<balance<<endl;
		}
		else 
			cout<<"Invalid input."<<endl;
	}
	
	void Bankaccount::account_details(){
		cout<<endl;
		cout<<"Your account number is = "<<account_number<<endl;
		cout<<"Your Complete name is  = "<<account_holder_name<<endl;
		cout<<"Your balance is  = "<<balance<<endl;
		cout<<endl;
	}
	
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
