#include<iostream>
using namespace std;
class Circle{
	private:
		double radius;
	public:
		void  get_radius(double);
		double circumfarence() const;
		double area() const;
};
	void Circle::get_radius(double r){
		radius = r;
	}
	
	double Circle::circumfarence() const{
		float circum;
		circum = 2 * 3.14 *radius;
		return circum;
	}
	
	double Circle::area() const{
		float araa = 3.14 * radius * radius;
		return araa;
	}
	
int main(){
	Circle obj;
	double raddius;
	
	cout<<"Write the radius of the circle = ";
	cin>>raddius;
	 obj.get_radius(raddius);
	
	cout<<"The circumference of the circle is = "<<obj.circumfarence()<<endl;
	cout<<"The area of the circle is = "<<obj.area();
	
	
	return 0;
}
