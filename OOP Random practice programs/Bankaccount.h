#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<iostream>
#include<string.h>
using namespace std;

 class Bankaccount{
	private:
		 int account_number;
		 string account_holder_name;
		 int balance;
	public:
		 void openaccount();
		 void deposit_money();
		 void withdraw_money();
		 void account_details(){
			cout<<endl;
			cout<<"Your account number is = "<<account_number<<endl;
			cout<<"Your Complete name is  = "<<account_holder_name<<endl;
			cout<<"Your balance is  = "<<balance<<endl;
			cout<<endl;
		}
};
#endif