#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getcount(void)
    {
        cout<< "the value of count is "<<count<<endl;

    }
};

int employee::count;
int main()
{
    employee nikhil, deepak, onkar;
    nikhil.setdata();
    nikhil.getdata();
    employee::getcount();

    deepak.setdata();
    deepak.getdata();
    employee::getcount();

    onkar.setdata();
    onkar.getdata();
    employee::getcount();

    return 0;
}