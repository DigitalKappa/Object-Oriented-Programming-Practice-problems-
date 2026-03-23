#include<iostream>
using namespace std;

class Book{
	private:
		  double bookid;
		  double pages;
		  double price;
	public:
		  void show() ;
		  void set(double,double,double);
		  double getprice() const;
};
	void Book::set(double b,double p,double pr){
		bookid = b;
		pages = p;
		price = pr;
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

	int main(){
		Book *obj1 ;
		Book *obj2 ;
		
		obj1 = new Book;
		obj2 = new Book;
		 
		double boid;
		double pag;
		double pric;
		
		cout<<"The details of the book 1:"<<endl;
		cout<<endl;
		cout<<"Write the Id of the book = ";
		cin>>boid;
		cout<<"Write the number of pages of the book = ";
		cin>>pag;
		cout<<"Write the price of the book = ";
		cin>>pric;
		cout<<endl;
	
		obj1->set( boid, pag, pric);
		obj1->show();
		
		cout<<"The details of the book 2:"<<endl;
		cout<<endl;
		cout<<"Write the Id of the book = ";
		cin>>boid;
		cout<<"Write the number of pages of the book = ";
		cin>>pag;
		cout<<"Write the price of the book = ";
		cin>>pric;
		cout<<endl;
	
	    obj2->set( boid, pag, pric);
		obj2->show();
		
		if(obj1->getprice()>obj2->getprice()){
			cout<<"The details of most costely book is given as:"<<endl;
				obj1->show();
		}
		else{
			cout<<"The details of most costely book is given as:"<<endl;
				obj2->show();
			}
		delete obj1;
		delete obj2;

		 return 0;
	}