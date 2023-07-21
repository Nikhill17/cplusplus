#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x = max (a,max(b,c));
        if (x==a) cout<<"alice";
        else if (x==b) cout<<"bob";
        else cout<<"charlie";
        cout<<endl;
    }
}
