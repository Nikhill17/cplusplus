#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // consructot declaration

    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

complex::complex(int x, int y) //--->this is a paramaterised constructor as it takes two values
{
    a = x;
    b = y;
}

int main()
{
    //implicit call
    complex a(4, 6);
    a.printnumber();

    //explicit call
    complex b(5, 7);
    b.printnumber();
    return 0;
}
