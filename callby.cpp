#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

//call by reference
void swapReferenceVar(int a, int b)
{                 //temp a  b
    int temp = a; //4    4  5
    a = b;        //4    4  5
    b = temp;     //4    5  4
}

// call by reference using c++ reference variables
int main()
{
    int x = 4, y = 5;
    //cout<<"the sum of 4 and 5 is "<<sum(4,5);
    cout << "the value of x is " << x << " and the value of y is " << y << endl;
    //swap(x,y);// this will not swap a and b
    //swappointer (&x,&y) ; // this will swap a and b using pointer reference
    swapReferenceVar(x, y); // this will swap a and b using reference variables
    cout << "the value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}