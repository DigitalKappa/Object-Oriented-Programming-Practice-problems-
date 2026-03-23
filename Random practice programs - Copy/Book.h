#ifndef BOOK_H
#define BOOK_H

class Book{
	private:
		  double bookid;
		  double pages;
		  double price;
	public:	
		  void get() ;
		  void show() ;
		  double getprice() const;
};

#endif