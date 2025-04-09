// static variable - write out of the class 
// static variable - every object has not its own count 
// satatic variables - class variables 
// static variable - initialise - 0 - visibility - inside the class 

#include<iostream>
using namespace std ;

class Employee{
int id ;
static int count ; // Declaration of static variable
public :
void setdata(void){
    cout << "Enter the id :";
    cin >> id ;
    count++ ;
}

void getdata(void){
    cout << "The id of this employee is : " << id << "and employee number is "<<count << endl  ;
}

};

int Employee::count = 100; // Definition and initialization of static variable

int main(){
    Employee yash ;
    yash.setdata();
    yash.getdata();
    return 0 ; 
}