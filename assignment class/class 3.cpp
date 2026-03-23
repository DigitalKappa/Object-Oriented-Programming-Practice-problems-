#include<iostream>
using namespace std;
class Triangle{
	private:
		double length;
		double width;
		double perpend;
	public:
        void set(double len, double wid, double per){
            length = len;
            width = wid;
            perpend = per;
        }
		double area(){
		    int final;
		    final = length * width;
		    final = final/2;
			return final;
		}
		double perimeter(){
			return length+width+perpend;
		}
	
	};
		
		int main (){
		    double A,P;
			Triangle obj;
			obj.set(3,4,5);
			A = obj.area();
			P = obj.perimeter();
			cout<<"Area is  = "<<A<<endl;
			cout<<"Perimeter is =  "<<P<<endl;
			
			return 0;
		}