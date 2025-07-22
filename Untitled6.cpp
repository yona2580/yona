#include <iostream>
using namespace std;
class car{
	public:
		string name;
		string color ;
		int price;
	};
	int main (){
		car car1;
		car1.name ="BMW";
		car1.color ="silver";
		car1.price =80988;
		
		car car2;
		car2.name="MERCEDES";
	car2.color="brown";
	car2.price=8999;
	
	cout<<"the car name is :"<<car1.name<<endl;
	cout<<"the car color is :"<<car1.color<<endl;
	cout<<"the car price is :"<<car1.price<<endl;
	
		cout<<"the car name is :"<<car2.name<<endl;
	cout<<"the car color is :"<<car2.color<<endl;
	cout<<"the car price is :"<<car2.price<<endl;
		
		
}
//cout<<car1.name<<"is"<<car1.price<<"and"<<car1.color<<endl;
//cout<<car2.name<<"is"<<car2.price<<"and"<<car2.color<<endl;
