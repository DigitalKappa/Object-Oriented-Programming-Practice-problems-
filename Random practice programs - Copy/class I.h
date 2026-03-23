#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

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
		 void account_details();
};
#endif