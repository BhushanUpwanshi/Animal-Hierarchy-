/*
downcasting
*/
#include<iostream>
using namespace std;

class employee{
	int empid;
	string name;
	protected: double salary;
	public:
		employee(){
			empid=0;
			name="emp name";
			salary =0;
		}
		employee(int empid,string name,double salary){
			this->empid=empid;
			this->name=name;
			this->salary=salary;
		}
		virtual void calsalary(){
			cout<<"Employee salary = "<<salary<<endl;
		}
		virtual void display(){
			cout<<"\nEmployee Id = "<<empid<<"\nEmployee Name = "<<name<<"\nSalary = "<<salary<<endl;
		}
};
class Manager:public employee{
	double incentives;
	string dptName;
	public:
		Manager(){
			incentives = 0;
			dptName = "Hr";
		}
		Manager(int empid,string name,double salary,double incentives,string dptName):employee(empid, name, salary){
			this->incentives = incentives;
			this->dptName = dptName;
			
		}
		void manageTask(){
			cout<<"\nManager specific Task......"<<endl;
		}
		void calsalary(){
			cout<<"\nManager salary ="<<salary+incentives<<endl;
		}
		void display(){
			employee::display();
			cout<<"Manager incentives = "<<incentives<<"\nDepartment name = "<<dptName<<endl;
		}
};
//class SalesPerson:public employee{
//	
//	double pa,fa,ta;
//	public:SalesPerson(){
//		pa,fa,ta=1000;
//	}
//	SalesPerson(int empid,string name,double salary,double pa,double fa,double ta):employee(empid,name,salary)
//	{
//		this->pa=pa;
//		this->fa=fa;
//		this->ta=ta;
//	}
//	void targets()
//	{
//	cout<<"SalesPerson Task "<<endl;	
//	}
//
//     void display()
//     {
//     	employee::display();
//     	cout<<"SalesPerson:"<<pa<<"   "<<ta<<"    "<<fa<<endl;
//     	
//	 }
//	 void calSalary()
//     {
//     	cout<<"SalesPerson Salary="<<(pa+fa+ta+this->salary)<<endl;
//	 }	 
//	 
//};
int main(){
	employee emp;
//	emp.calsalary();
//	emp.display();
//	
    Manager mgr(101,"Rakesh",50000,12000,"Agriculture");
//	mgr.display();

//	employee* e[3];
//	e[0] = &emp;
//	e[1] = &mgr;
//	e[1] = &mgr1;
//	e[2] = &mgr2;
	
//	for(int i=0;i<3;i++){
//		e[i] -> display();
//		cout<<"----------------------"<<endl;
//	}
	//employee* e[1]=&mgr;
	
	//e[1]->manageTask();->error as employee has no managertask function;
//	Manager* mgr2 = dynamic_cast<Manager*>(e[1]);
//	mgr2->manageTask();

	employee* ptr = &emp;
	ptr -> display();
	
	Manager* m2 = dynamic_cast<Manager*>(ptr);
	m2->manageTask();
}















