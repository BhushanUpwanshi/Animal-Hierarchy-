/*
Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. 
Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. 
Each of these derived classes should have specific properties and methods related to their
 respective categories of animals.
*/

#include <iostream>
#include <string>
using namespace std;

class animal{
	public:
	int limbsCount;
	string  sound,move;
	bool isAlive;
	public:
		animal(){
			int limbsCount=0;
			string  sound="animal sound",move="Animal is moving";
			bool isAlive=true;
		}
		animal(int limbsCount,string sound,string move,bool isAlive){
			this->limbsCount =limbsCount;
			this->sound = sound;
			this ->move=move;
			this-> isAlive =isAlive;
		}
		void display(){
			cout<<"\nno. of limbs "<<limbsCount<<"\nanimal sound "<<sound<<"\nanimal movement "
			<<move<<"\nanimal species aive "<<endl;
			
		}
};
class mammal: public animal{
	string mGland;
	string raiseOffspring ;
	public:
		mammal(){//:public animal()
			string mGland= "Have mammary glands";
			string raiseOffspring = "Raises child";
		}
		mammal(int limbsCount,string sound,string move,bool isAlive,
		string mGland,string raiseOffspring):animal
		( limbsCount, sound, move, isAlive){
			this-> mGland= mGland;
			this-> raiseOffspring=raiseOffspring;
			
		
		}
};
class bird: public animal{
	string laysEgg;
	string canFly ;
	public:
		bird(){
			string laysEgg= "Birds lay eggs.";
	string canFly = "Birds fly";
		}
		bird(int limbsCount,string sound,string move,bool isAlive,
		string laysEgg,string canFly):animal
		( limbsCount, sound, move, isAlive){
			this-> laysEgg= laysEgg;
			this-> canFly=canFly;	
		}
};
class fish: public animal{
	string Fin;
	string canSwim ;
	public:
		fish(){
			string Fin= "Fish have fins";
			string canSwim = "Fish can swim";
		}
		fish(int limbsCount,string sound,string move,bool isAlive,
		string Fin,string canSwim):animal
		(limbsCount, sound, move, isAlive){
			this-> Fin= Fin;
			this-> canSwim=canSwim;
			
			
		}
};

int main(){
	cout<<"---------- calling object of Animal class--------"<<endl;
	animal a1;
	a1.display();
	animal a2(3,"Mewww","Flying....",false);
	a2.display();
	cout<<"-------------------\n"<<endl;
	
	cout<<"---------- calling object of Mammal class--------"<<endl;
	mammal m1;
	m1.display();
	mammal m2(4,"Bark...", "run",  true, "Yes","younger ones");
	m2.display();
	cout<<"---------- --------\n"<<endl;
	
	cout<<"---------- calling object of Bird class--------"<<endl;
	bird b1;
	b1.display();
	bird b2(2,"Birds sing ..........","Bird fly .........",true," : YES"," : YES");
	cout<<"---------- --------\n"<<endl;
	
	cout<<"---------- calling object of Fish class--------"<<endl;
	fish f1;
	f1.display();
	fish f2(0,"Bubble....","Fish swim...",true,": 3 fins ","Yes");
	cout<<"---------- --------\n"<<endl;
	return 0;
}
























