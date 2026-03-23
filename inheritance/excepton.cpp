//3. Exceptiom programme///
#include<iostream>
using namespace std;
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
	string type;
	string name;
	char gender;
	int age;
	cout<<"Write the type/category of your pet = ";
	cin>>type;
	cout<<"Write the name of your pet = ";
	cin>>name;
	cout<<"Write the gender of your pet = ";
	cin>>gender;
	cout<<"Write the age of your pet = ";
	cin>>age;
	
	//try ka keyword error ko check kernay ka liya ha
	//ka shayad is ma error ho agar ho ga to ussay as a parameter ka tor per throw ka keyword ka zariya pas ekr deyn gay
	try{
		if(age>=10){
			cout<<endl;
			cout<<"Your pet is Eligible for compitition"<<endl;
		}
		else
		 throw(age);
	}
	//ya keyword us ko accept keray ga as written below.....
	catch(int num){
		cout<<endl;
		cout<<"Your age is less than or equal to 10 so your pet is not Eligible for Compitition"<<endl;
	}
	
	Animal obj(name , type , gender , age);
	obj.showdetail();
	obj.showsecdetail();
	return 0;
}