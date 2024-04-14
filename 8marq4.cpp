/*
4. Create a class Book with data members as bname,id,author,price. 
Write getters and setters for all the data members. 
Also add the display function. 
Create Default and Parameterized constructors. 
Create the object of this class in main method and invoke all the methods in that class. 

5. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. 

6. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors. 
Write getters and setters for all the data members. Also add the display function. Create the object of this class in 
main method and invoke all the methods in that class.
*/

#include <iostream>
#include<string.h>
using namespace std;
//Create a class Book with data members as bname,id,author,price.
class Book{
	int id = 0,price = 0;
	char* bname = "Book name", *author = "Author name";
	
	public : 
	//Create Default and Parameterized constructors. 
	Book(){
	}
	
	Book(char* b,int i,char* a,int p){
		bname = new char[strlen(b)+1];
		strcpy(bname,b);
		id=i;
		author = new char[strlen(a)+1];
		strcpy(author,a);
		price = p;
	}
	
	//Write getters and setters for all the data members. 
	void setBname(char* bname){
		this->bname =new char[strlen(bname)+1];
		strcpy(this->bname,bname);
	}
	void setId(int id){
		this-> id =id;
	}
	void setAuthor(char* author){
		this->author = new char[strlen(author)+1];
		strcpy(this->author ,author);
	}
	void setPrice(int price){
		this->price =price;
	}
	char* getBname(){
		return this->bname;
	}
	int getId(){
		return id;
	}
	char* getAuthor(){
		return author;
	}
	int getPrice(){
		return price;
	}	
	//Also add the display function. 
	void display(){
		cout<<"\nBook name is : "<<bname<<"\nBook id is : "<<id<<"\nAuthor of the book is : "<<author<<"\nPrice of the book is : "<<price<<endl;
	}
	
};
//Create the object of this class in main method and invoke all the methods in that class. 
int main(){
	cout<<"--------invocking functions by object b1--------";
	Book b1;
	b1.display();
	
	cout<<"--------invocking functions by object b2--------";
	Book b2("Wonder Land",157,"Ales",1500);
	b2.display();
	
	cout<<"--------invocking functions by object b3--------";
	Book b3;
	b3.setBname("Ramayana");
	b3.setId(1);
	b3.setAuthor("walmiki");
	b3.setPrice(1000000);
	cout<<"\nBook name is : "<<b3.getBname()<<endl;
	cout<<"Book id is : "<<b3.getId();
	cout<<"\nAuthor of the book is : "<<b3.getAuthor();
	cout<<"\nPrice of the book is : "<<b3.getPrice();
	return 0;
}













