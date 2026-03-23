//2. Interface programme///
#include<iostream>
using namespace std;
//this is known as interface bcz it contain only pure vitual function no data members and not any defined function
class ZOO{
	public:
		virtual void showdetail() = 0;
		virtual void showsecdetail() = 0;
};
class Animal : public ZOO{
	private:
		string Animalname;
		string animaltype;
		char gender;
		int age ;
	public:
		//here i use other variable instead of using this..
		Animal(string Aname , string atype , char gend , int ag){
			Animalname = Aname;
			animaltype = atype;
			gender = gend;
			age = ag;
		}

		void showdetail() override{
			cout<<"The name of the animal is = "<<Animalname<<endl;
			cout<<"The nick name of your pet is = "<<animaltype<<endl;
		}
		void showsecdetail() override{
			cout<<"The gender of the "<<Animalname<<" is = "<<gender<<endl;
			cout<<"The age is = "<<age<<endl;
		}
};


int main(){
	Animal obj("Dog","Sheroo",'M', 15);
	obj.showdetail();
	obj.showsecdetail();
	return 0;
}