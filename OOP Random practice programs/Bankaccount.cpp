#include "Bankaccount.h"
#include<iostream>
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
	