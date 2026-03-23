#include<iostream>
using namespace std;

class Book{
	public:
		  double bookid;
		  double pages;
		  double price;
	public:
		  void get() ;
		  void show() ;
		  void set(double,double,double);
		//  double getprice() const;
};
	void Book::set(double b,double p,double pr){
		bookid = b;
		pages = p;
		price = pr;
	}
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
	double public Book:: getprice() const{
		return price ;
	}

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