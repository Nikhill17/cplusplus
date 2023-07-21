//an array is a collection of items of similar type in contiguos memory locations.
//sometimes,a simple variable is not enough to hold all the data.

#include<iostream>
using namespace std;
int main ()
{
   int marks [4]={23, 45, 56, 89};
   int mathmarks[6]={70,80,90,100};

   cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"these are mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    //you can change the value of an array
    marks[2]=455;
    cout<<"these are marks"<<endl;
    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;
    //cout<<marks[2]<<endl;
    //<<marks[3]<<endl;

    //pointers and arrays
    int*p=marks;
    cout<<"the value of marks [0] is "<<*p<<endl;
    cout<<"the value of marks [1] is "<<*(p+1)<<endl;
    cout<<"the value of marks [2] is "<<*(p+2)<<endl;
    cout<<"the value of marks [3] is "<<*(p+3)<<endl;

    return 0;

   
}