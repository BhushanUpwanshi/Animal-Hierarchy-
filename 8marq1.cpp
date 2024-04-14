/*
1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.

*/

#include<iostream>
using namespace std;
class student{
    private: int rollno,mark1,mark2,mark3,total =0,percentage = 0;
            char grade;
    public: void acceptinfo(int rollno,int mark1,int mark2,int mark3){
        this -> rollno =rollno;
        this -> mark1 =mark1;
        this -> mark2 = mark2;
        this -> mark3 = mark3;
        cout<<"-------student Info Accepted------ "<<endl;
        cout<<"\n\n";
    }
    void display(){
        cout<<"-------student Info is ------ "<<endl;
        total = mark1+mark2+mark3;
        percentage = total/3;
        if(percentage>=90) grade = 'A';
        else if(percentage >=80) grade = 'C';
        else if(percentage >=70) grade = 'D';
        else if(percentage >=60) grade = 'E';
        else if(percentage >=50) grade = 'F';
        else grade = 'l';

        cout<<"Roll no is = "<<rollno<<endl
        <<"Mark1 ="<<mark1<<endl
        <<"Mark2 ="<<mark2<<endl
        <<"Mark3 ="<<mark3<<endl
        <<"Total = "<<total<<endl
        <<"percentage = "<<percentage<<endl
        <<"grade = "<<grade<<endl;
    }
};
int main(){
    student s1;
    s1.acceptinfo(136,87,92,85);
    s1.display();
    return 0;
}
