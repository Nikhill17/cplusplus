#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define MAX 10

using namespace std;

class pizza 
{
  int rear,front;
  int que[MAX];
  public:
  void initialize();
  void insert(int x );
  int delete1();
  void display();
};

void pizza ::initialize()
{
    int i ;
    front= rear=-1;
    for(i=0;i<MAX;i++)
    {
        que[i]=0;
    }
}

void pizza::insert(int x )
{
    if (((rear+1) % MAX)==front)
    {cout<<"\n CIRCULAR QUEUE IS FULL ";
    }
    else
    {rear=(rear+1)%MAX;
     que[rear]=x;
     if(front==-1)
     {front=0;}
    } 
}

int pizza::delete1()
{
    int data ;
    if(front==-1 )
    {cout<<"\n CIRCULAR QUEUE IS EMPTY ";}
    data=que[front];
    que[front]=0;
    if(front==rear)
    { front = rear = -1 ;}
    else
    {
      front = (front+1)%MAX ;}
      return data ;     
}

void pizza::display()
{
    int i ; 
    cout<<"\n ALL ORDERS ..... CONSIDER ZERO AS BLANK .....\n";
    for(i=0;i<MAX;i++)
    {
        cout<<" "<<que[i];
    }
}

int main ()
{
    pizza s1;
    int ch , n , x ;
    s1.initialize();
    while(1)
    {
        cout<<"\n\n I.T.S PIZZA PARLOUR...... MAXIMUM SIZE IS 10 ";
        cout<<"\n 1. ACCEPT ORDER (INSERT ORDER IN QUEUE)";
        cout<<"\n 2. SERVE ORDER (DELETE ENTRY FROM QUEUE)";
        cout<<"\n 3. DISPLAY ALL ORDERS IN A SCENARIO";
        cout<<"\n 4. EXIT ";
        cout<<"\n ENTER YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
            case 1 : 
                cout<<"\n ENTER THE NEW ORDER : ";
                cin>>x;
                s1.insert(x);
                break;
            
            case 2 :
                x=s1.delete1();
                if(x>0)
                {cout<<"\n ORDER NUMBER "<<x<<" IS SERVED TO THE CUSTOMER.\n (DELETED FROM THE QUE";
                }
                s1.display();
                break;
            
            case 3 : 
                s1.display();
                break;

            case 4 : 
                exit(0);
        }
    }
}