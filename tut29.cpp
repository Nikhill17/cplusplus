#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    //creating a Constructor
    //Constructor is a special member function with the same name as of class.
    //It is used to initialise the object of its class
    //it is automatically invoked whenever an object is created.
    complex(void); //constructor declaration

    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

complex::complex(void) //---> this is default constructor
{
    a = 0;
    b = 0;
}
int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
};


/* characteristics of constructor 
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot have have return values and do not have return types.
4. we cannot refer to their address

*/