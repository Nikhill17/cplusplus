#include<iostream>
using namespace std;

     typedef struct employee
    {
        /* data */
        int eId;
        char favchar;
        float salary;
    }ep;

        union money
        {
            /*data*/
            int rice;
            char car;
            float pounds;
        };
        int main(){
            ep nikhil;
            enum meal {breakfast, lunch, dinner};
            cout<<breakfast;
            cout<<lunch;
            cout<<dinner;
            //union money m1;
            //m1.rice= 34;
            //m1.car= 'c';
            //cout<<m1.rice<<endl;
        }


    
         /*int main(){
            ep nikhil;
            nikhil.eId = 1 ;
            nikhil.favchar = 's';
            nikhil.salary=1000000;
            cout<<"the eId name of nikhil is " <<nikhil.eId<<endl;
            cout<<"the fav character of nikhil " <<nikhil.favchar<<endl;
            cout<<"the value of nikhil salary is " <<nikhil.salary<<endl;*/

    