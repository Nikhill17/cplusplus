#include <iostream>
using namespace std;
void Count()
{
    int n, count;
    string word;
    cin >> n >> word;
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            count = 0;
            continue;
        }
        else
        {
            count++;
            if (count == 4)
                break;
        }
    }
    if (count < 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Count();
    }
    return 0;
}