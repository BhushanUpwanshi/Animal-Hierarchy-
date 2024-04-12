/*
1 Solve this.
Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.

Create Emp based organization structure --- Emp , Mgr , Worker


1.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.

Methods ---
1.2. compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})

1.2 Mgr state  ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods : 
1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details

2. Hire Worker  
I/P : all worker details

3. Display information of all employees net salary (by invoking computeNetSal), 

4. Exi
*/

// try in cpp
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

/*
1.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.
*/
class Emp{
	protected :
	int id,deptId;
	string name;
	double basicSalary;
	
	public : 
	Emp(){
		id=0;
		deptId = 0;
		name = "Employee";
		basicSalary=0;
	}
	Emp(int id,int deptId,string name, double basicSalary){
		this-> id=id;
		this -> deptId= deptId;
		this ->  name = name;
		this-> basicSalary = basicSalary;
	}
	/*
Methods ---
1.2. compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})
*/
	virtual double computeNetSalary(){
		return basicSalary;
	}
	
	virtual void display(){
		cout<<"--------emp display --------"<<endl;
		cout<<"\nid "<<id<<"\ndeptId "<<deptId<<"\nname "<<name<<"\nbasicSalary "<<basicSalary<<endl;
	}
	~Emp(){
		cout<<"----------Emp destructor called ------"<<endl;
	}
};

/*
1.2 Mgr state  ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary
*/
class Mgr:public Emp{
	double perfBonus;
	public :
		Mgr(){
			this->perfBonus = 0;
		}
		
		Mgr(int id,int deptId,string name, double basicSalary,double perfBonus):Emp(id, deptId, name, basicSalary){
			this->perfBonus=perfBonus;
			
		}
		
		double computeNetSalary(){
//			cout<<"Basic salary = "<<basicSalary<<endl;
//			cout<<"perfBonus = "<<perfBonus<<endl;
			return basicSalary+perfBonus;
			cout<<"-----------------"<<endl;
	}
	void display(){
		cout<<"--------mgr display --------"<<endl;
		cout<<"\nid "<<id<<"\ndeptId "<<deptId<<"\nname "<<name<<"\nbasicSalary "<<basicSalary<<"\nperfBonus "<<perfBonus<<endl;
	}
	~Mgr(){
		cout<<"----------Mgr destructor called ------"<<endl;
	}
};

/*
1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods : 

*/
class Worker:public Emp{
	int hoursWorked,hourlyRate;
	public : 
	Worker(int id,int deptId,string name, double basicSalary,int hoursWorked,int hourlyRate):Emp(id, deptId, name, basicSalary){
		this -> hoursWorked=hoursWorked;
		this -> hourlyRate=hourlyRate;
	}
	// 1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary.
	double computeNetSalary(){
			return basicSalary+(hoursWorked*hourlyRate);
			cout<<"-----------------"<<endl;
	}
	// 2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter).
	int getHrlyRate(){
		return hourlyRate;
	}
	
	void display(){
		cout<<"--------Worker display --------"<<endl;
		cout<<"\nid "<<id<<"\ndeptId "<<deptId<<"\nname "<<name<<"\nbasicSalary "<<basicSalary<<
		"\nhoursWorked "<<hoursWorked<<"\nhourlyRate"<<hourlyRate<<endl;
	}
	~Worker(){
		cout<<"----------Worker destructor called ------"<<endl;
	}
};

int main(){
//	cout<<"---------- Manager class ---------"<<endl;
//	Mgr m1(101,3,"Yogesh",50000,2000);
//	m1.display();
//	cout<<"\ncomputeNetSalary is : "<<m1.computeNetSalary()<<endl;
//	
//	cout<<"---------Worker class -------------"<<endl;
//	Worker w1(71,6,"Kalidas",10000,9,100);
//	w1.display();
//	cout<<"Compute net salary : "<<w1.computeNetSalary()<<endl;
	
	/*
	Create suitable array to store organization details.
	Provide following options
	1. Hire Manager
	I/P : all manager details

	2. Hire Worker  
	I/P : all worker details

	3. Display information of all employees net salary (by invoking computeNetSal), 

	4. Exi
*/
	
	int a,n;
	int i=0;
	int id, deptId,hoursWorked, hourlyRate;;
	string name;
	double basicSalary, perfBonus;
	cout<<"Enter the no of employee in organization."<<endl;
	cin>>a;
	Emp* allemp[a];
	//Mgr* m;
	//Worker* w;
	cout<<"Enter 1. to Hire Manager :\n"<<"Enter 2. to Hire Worker :\n"<<
		"Enter 3. to Display information of all employees net salary \n"<<"Enter 4. to Exit : "<<endl;
	do{
		
		cout<<"\nEnter value : ";
		cin>>n;
		switch(n){
			case 1:
				cout<<"--------- Enter manager Details---------"<<endl;
				
				cout<<"Enter id : ";
				cin>>id;
				cout<<"Enter department Id : ";
				cin>>deptId;
				cout<<"Enter name : ";
				cin>>name;
				cout<<"Enter basic Salary : ";
				cin>>basicSalary;
				cout<<"Enter Performance bonus : ";
				cin>>perfBonus;
				allemp[i] = new Mgr(id, deptId, name, basicSalary, perfBonus);
//				m= new Mgr (id, deptId, name, basicSalary, perfBonus);
//				allemp[i] = m;
				i++;
				cout<<"---------  ---------"<<endl;
				break;
				
			case 2:
				cout<<"--------- Enter Worker Details---------"<<endl;
				cout<<"Enter id : ";
				cin>>id;
				cout<<"Enter department Id : ";
				cin>>deptId;
				cout<<"Enter name : ";
				cin>>name;
				cout<<"Enter basic Salary : ";
				cin>>basicSalary;
				cout<<"Enter hours Worked : ";
				cin>>hoursWorked;
				cout<<"Enter hourly Rate : ";
				cin>>hourlyRate;
				allemp[i]= new Worker(id, deptId, name, basicSalary, hoursWorked, hourlyRate);
//				w = new Worker(id, deptId, name, basicSalary, hoursWorked, hourlyRate);
//				allemp[i]=w;
				i++;
				cout<<"---------  ---------"<<endl;
				break;
			case 3:
				for(int j=0;j<i;j++){
					cout<<"\nInformation of employees net salary is : "<<endl;
					cout<<allemp[j]->computeNetSalary();
					//cout<<typeid(*allemp[j]).name()<<" : "<<endl;
				}
				break;
			case 4:
				cout<<"You choose 4 to exit ."<<endl;
				break;			
		}
	}while(n!=4);
	for (int j = 0; j < i; j++) {
        delete allemp[j];
    }

}























