#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

//calculate the volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

//caluculate the volume of cube
int volume(int a)
{
    return a * a * a;
}

//calucate the volume of rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "the sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "the sum of 3,7 and 6 is " << sum(3, 7, 6) << endl;
    cout << "the volume of cuboid of 3,7,6 is " << volume(3, 7, 6) << endl;
    cout << "the volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "the volume of rectangular box of lenght 8, breadth 5 and height 6 is " << volume(8, 5, 6);

    return 0;
}