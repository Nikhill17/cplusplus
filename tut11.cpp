#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int*b = & a;
    //---> (address of) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    //*--->(value at )dereference operator
    cout<<"the value at address at b is "<<*b<<endl;


    
} 

