#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    //static int c=0; //this execute only once
    //c=c+1;          //next time this function is run ,the value of c will be retained
    return a * b;
}

float moneyreceived(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}
//int strlen(const char *p){

//}
int main()
{
    int a, b;
    //cout<<"enter the value of a and b" <<endl;
    //cin>>a>>b;
    //cout<<"the product of a and b is "<<product(a,b)<<endl;
    //cout<<"the product of a and b is "<<product(a,b)<<endl;
    //cout<<"the product of a and b is "<<product(a,b)<<endl;
    //cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout << "if you have " << money << "Rs in your bank account , you will recieve " << moneyreceived(money, 1.1) << "Rs after 1 year" << endl;
    cout << "for VIP :if you have " << money << "Rs in your bank account , you will recieve " << moneyreceived(money, 1.4) << "Rs after 1 year";
    return 0;
}
