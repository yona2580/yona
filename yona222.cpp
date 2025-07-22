#include <iostream> 
using namespace std;
int add ( int x,int y) {
	return x+y;
}
int main( ) {
	int num1,num2,sum;
	cout<<"enter first number:";
	cin>>num1;
	cout<<"enter the second number";
	cin>>num2;
	sum= add(num1,num2);
	cout<<"the sum is"<<sum<<endl;
}