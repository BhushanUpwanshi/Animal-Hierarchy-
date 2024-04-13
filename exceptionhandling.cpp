/*
Exception handling
*/
#include<iostream>
using namespace std;

namespace mySpace{

class exception{
	public:
		string msg;
		exception(string msg){
			this->msg=msg; 
		}
};
class account{
	private: int actid;
	string name;
	double balance;
	public:
	account(int actid,string name,double balance){
		this->actid=actid;
		this->name=name;
		this->balance=balance; 
	}
	void withdraw(double amount){
		if(amount>balance){
		throw new exception("Low balance....");
		}
		cout<<"-------withdraw-------"<<endl;
		cout<<"Remaining balance = "<< balance-amount<<endl;
	}
};
}

int main(){
	typedef mySpace::exception exception;
	typedef mySpace ::account account;
	
	try{
	account a1(101,"Kashyap",50000);
	a1.withdraw(2000);
	}
	catch(exception* e1){
		cout<<e1->msg;
	}
}

