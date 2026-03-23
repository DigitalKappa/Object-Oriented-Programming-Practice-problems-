#include "Book.h"
#include<iostream>
using namespace std; 
	void Book::get() {
		cout<<"Write the Id of the book = ";
		cin>>bookid;
		cout<<"Write the number of pages of the book = ";
		cin>>pages;
		cout<<"Write the price of the book = ";
		cin>>price;
		cout<<endl;
	}
	void Book::show(){
		cout<<"The book id is = "<<bookid<<endl;
		cout<<"The number of pages is = "<<pages<<endl;
		cout<<"The price of the book is = "<<price<<endl;
		cout<<endl;
	}
	double Book::getprice() const{
		return price ;
	}