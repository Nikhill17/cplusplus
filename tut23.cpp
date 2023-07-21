#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void dispayPrice(void);
    // void shop::setPrice(void);
    void setPrice()
    {
        cout << "enter Id of your item no " << counter + 1 << endl;
        cin >> itemId[counter];
        cout << "enter Price of your item " << endl;
        cin >> itemPrice[counter];
        counter++;
    };
};

void shop::dispayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.dispayPrice();

    return 0;
}