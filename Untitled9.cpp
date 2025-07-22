#include <iostream>
using namespace std;
class Bankaccount{
	private:
		int balance;
		public:
		void setbalance(int balance ) {
			balance = 8000;
		}
		int getbalance (){
			return balance;
	}
	
	};
		int main() {
		 Bankaccount s;
			s.setbalance(8000);
			cout<<"balance:"<<s.getbalance()<<endl;
			return 0;
		}
		
