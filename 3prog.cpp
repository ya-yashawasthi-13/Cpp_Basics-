#include<iostream>
using namespace std ;

class A{
public :
A(int a){
    cout <<"a :"<<a<<endl;
}
};

int main(){
    A(10);
    return 0;
}