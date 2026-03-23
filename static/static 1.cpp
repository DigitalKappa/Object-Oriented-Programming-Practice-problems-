 //Use a static int counter variable and increment it each time the function is called.
 #include<iostream>
 using namespace std;
 
 class Student{
 	private:
 		static int counter ;
 	public:
 		void Function(){
 			counter++;
 			cout<<counter<<endl;
		 }
 };
 
 int Student::counter = 0;
 
 int main(){
 	Student obj;
 		obj.Function();
 
 	return 0;
 }