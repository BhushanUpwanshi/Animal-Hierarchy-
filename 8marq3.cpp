/*
3. Create a class Date with data members as dd, mm, yy. 
Write getters and setters for all the data members. 
Also add the display function. Create Default and Parameterized constructors. 
Create the object of this class in main method and invoke all the methods in that class. 

*/
#include<iostream>
using namespace std;
//Create a class Date with data members as dd, mm, yy. 
class Date{
	private : int dd=01, mm=01, yy=2000;
	public : 
	//Create Default and Parameterized constructors. 
	Date(){
	}
	Date(int dd,int mm,int yy){
		this -> dd = dd;
		this -> mm = mm;
		this -> yy = yy;
	}
	//Write setters for all the data members. 
	void setDD(int dd){
		this -> dd =dd;
	}
	void setMM(int mm){
		this -> mm =mm;
	}
	void setYY(int yy){
		this->yy = yy;
	}
	//Write getters for all the data members. 
	int getDD(){
		return this->dd;
	}
	int getMM(){
		return mm;
	}
	int getYY(){
		return yy;
	}
	//Also add the display function. 
	void display(){
		cout<< "---------executing display function----------"<<endl;
		cout<<"Date is : "<<dd<<endl<<"Month is : "<<mm<<endl<<"Year is : "<<yy<<endl;
		cout<<"dd/mm/yy = "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	}
};
//Create the object of this class in main method and invoke all the methods in that class.
int main(){
	cout<<"---------- invoking methods by object  d1---------"<<endl;
	Date d1;
	d1.display();
	
	Date d2(1,5,2001);
	cout<<"---------- invoking methods by object  d2---------"<<endl;
	d2.display();
	
	Date d3;
	cout<<"---------- invoking methods by object  d3---------"<<endl;
	cout<<"-------------------invocking setters ------------------"<<endl;
	d3.setDD(8);
	d3.setMM(3);
	d3.setYY(2024);
	cout<<"-------------------invocking getters ------------------"<<endl;
	cout<<d3.getDD()<<endl;
	cout<<d3.getMM()<<endl;
	cout<<d3.getYY()<<endl;
	d3.display();
	
	cout<<"------------------End of program--------------------";
	
	return 0;
}















