#include "Book.h"
#include<iostream>
using namespace std;

int main(){
			Book bok1;
			Book bok2;
		cout<<"The details of the book 1:"<<endl;
		cout<<endl;
			bok1.get();
			bok1.show();
		cout<<"The details of the book 2:"<<endl;
		cout<<endl;
			bok2.get();
			bok2.show();
		
		if(bok1.getprice()>bok2.getprice()){
			cout<<"The details of most costely book is given as:"<<endl;
				bok1.show();
		}
		else{
			cout<<"The details of most costely book is given as:"<<endl;
				bok2.show();
			}
			
		 return 0;
	}