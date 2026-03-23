//1. Absraction programme///
//is ma concept  ha this ka//
//abstract class ka 
//or abstraction ka kunka is whole process ko abstraction kehtay han 
#include<iostream>
using namespace std;

class ZOO{
	protected:
		string name;
		char gender;
	public:
		ZOO(string name , char gender){
			//yahan ma na this lagaya ha yahan ako this ka concept mil jay ga.
			//ma chahta  to koi or variable le leta us ka liya this nahi lagna tha ..
			this->name = name;
			this->gender = gender;
		}
		//ya pure function ha kun ka is ko initializa kia ha zero sa..
		// jo ka zaruri/lazmi ha abstract class ka liya..
		virtual void showdetail() = 0;
};

class Animal : public ZOO{
	private:
		string Animalname;
	public:
		Animal(string Animalname , string name , char gender): ZOO(name , gender){
			this->Animalname = Animalname;
		}
		void showdetail() override{
			cout<<"The name of the animal is = "<<Animalname<<endl;
			cout<<"The nick name of your pet is = "<<name<<endl;
			cout<<"The gender of your dog is = "<<gender<<endl;
		}
};
int main(){
	Animal obj("CAT","Tom",'M');
	obj.showdetail();
	return 0;
}