/*
2. Create a class Person with data members as name, age, city. 
Write getters and setters for all the data members.
Also add the display function.
Create Default and Parameterized constructors. 
Create the object of this class in main method and invoke all the methods in that class.
*/
#include <iostream>
#include <string.h>
//#include<bits/stdc++.h>
//#include<cstring>
using namespace std;

class person{
    private:
    char* name = "Name";
    char* city = "City";
    int age=0;
    public:
    	person(){
        cout<<"------------this is default / no parameter constructor-------"<<endl<<endl;
    }
    person(char* name,char* city,int age){
        
		this->name =new char[strlen(name)+1];
		strcpy(this->name,name);
        this-> city = new char[strlen(city)+1];
        strcpy(this->city,city);
        
        /*
        strcpy(this->name,name);
        strcpy(this->city,city);
        */
        this->age=age;
    }
    
    ~person(){
        cout<<"-----------Destructor has been called----------"<<endl;
    }
    
    // setters
    void setName(char* name){
    	cout<<"----------setName is invoked--------"<<endl;
    	//this -> name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void setCity(char* city){
    	cout<<"----------setCity is invoked--------"<<endl;
    	//this -> city = new char[strlen(city)+1];
        strcpy(this-> city, city);
    }
    void setAge(int age){
    	cout<<"----------setAge is invoked--------"<<endl;
        this -> age =age;
    }
    //getters
    char* getName(){
    	cout<<"----------getName is invoked--------"<<endl;
        return this ->name;
    }
    char* getCity(){
    	cout<<"----------getCity is invoked--------"<<endl;
        return city;
    }
    int getAge(){
    	cout<<"----------getAge is invoked--------"<<endl;
        return age;
    }

    // display function
    void display(){
        cout<<"-----------This is Display function-----------"<<endl;
        cout<<"Name of Person is : ";
        for(int i=0;i<strlen(name);i++){
            cout<<*(name+i);
        }
        cout<<"\nCity name is : ";
        for(int i=0;i<strlen(name);i++){
            cout<<*(city+i);
        }
        cout<<"\nAge of person is : "<<age<<endl;
    }
    

};
int main(){
	
    person p1("Naruto","Uzumaki",23);
    p1.display();
    
//    person p2;
//	//p2.display();
//	p2.setName("Soul");
//	p2.setCity("Azkaban");
//	p2.setAge(102);
//	cout<<"Name of peerson p2 is : "<<p2.getName()<<endl;
//	cout<<"City of person p2 is : "<<p2.getCity()<<endl;
//	cout<<"Age of person p2 is : "<<p2.getAge()<<endl;
//	
	
	
	
}













