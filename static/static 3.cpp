//Create a class MathOperations with a static function called square(int x) that returns the square of a number.
//Use main() to call this function without creating an object.
#include<iostream>
using namespace std;
class MathOperations{
	private:
		int num;
	public:
		static int square(int x){
			int result ;
			result = x * x;
			return result;
		}
};

int main(){
	int final;
	int a;
	cout<<"Write your number = ";
	cin>>a;
	final = MathOperations::square(a);
	
	cout<<"The Square is = "<<final<<endl;
	return 0;
}
 