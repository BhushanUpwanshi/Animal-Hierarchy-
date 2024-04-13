/*
Run time Type Identification
*/
#include <iostream>
#include<typeinfo>
using namespace std;

class emp{
	public:
	virtual void display(){
		cout<<"-----emp details-------"<<endl;
	}
};
class mgr:public emp{
	public:
		void mgrtask(){
			cout<<"--------mgr task-----"<<endl;
		}
		void display(){
			cout<<"-------mgr details-------"<<endl;
		}
};
class admin:public emp{
	public:
		void admintask(){
			cout<<"--------admin task-----"<<endl;
		}
		void display(){
			cout<<"-------admin details-------"<<endl;
		}
};
class mex:public emp{
	public:
		void mextask(){
			cout<<"--------mex task-----"<<endl;
		}
		void display(){
			cout<<"-------mex details-------"<<endl;
		}
};

int main(){
	emp* allemp[4];
	allemp[0]=new mgr;
	allemp[1]=new mex;
	allemp[2]=new admin;
	allemp[3]=new mgr;
	
	for(int i=0;i<4;i++){
		if(typeid(*allemp[i])==typeid(mgr)){
			mgr* m1=dynamic_cast<mgr*>(allemp[i]);
			m1 -> mgrtask();
			m1->display();
		}else if(typeid(*allemp[i])==typeid(mex)){
			mex* e1 = dynamic_cast<mex*>(allemp[i]);
			e1->mextask();
			e1->display();
		}else if(typeid(*allemp[i])==typeid(admin)){
			admin* a1 = dynamic_cast<admin*>(allemp[i]);
			a1->admintask();
			a1->display();
		}
		
	}
}





