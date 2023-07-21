#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define MAX 10

using namespace std;

class jobque
{
    int rear , front ;
    int que[MAX];
    public: 
    void initialize();
    void insert(int x);
    int delete1();
    void display();

};

void jobque ::initialize()
{
    int i ;
    front= rear=-1;
    for(i=0;i<MAX;i++)
    {
        que[i]=0;
    }
}

void jobque::insert(int x )
{
    if (rear==MAX-1)
    {cout<<"\n JOB QUEUE IS FULL ";
    }
    else
    {rear++;
     que[rear]=x;
     if(front==-1)
     {front=0;}
    } 
}

int jobque::delete1()
{
    int data ;
    if(front==-1 && rear==-1)
    {cout<<"\n JOB QUEUE IS EMPTY ";}
    data=que[front];
    que[front]=0;
    if(front==rear)
    { front = rear = -1 ;}
    else
    {front++ ;}
    return data ;     
}

void jobque::display()
{
    int i ; 
    cout<<"\n OPERATING SYSTEM ...... CONSIDER ZERO AS BLANK .....\n";
    for(i=0;i<MAX;i++)
    {
        cout<<" "<<que[i];
    }
}

int main ()
{
    jobque s1;
    int ch , n , x ;
    s1.initialize();
    while(1)
    {
        cout<<"\n\n OPERATING SYSTREM JOBQUEUE......(QUEUE SIZE IS 10)";
        cout<<"\n 1. ADD JOB (INSERT JOB IN QUEUE)";
        cout<<"\n 2. DELETE JOB (DELETE ENTRY FROM QUEUE)";
        cout<<"\n 3. DISPLAY JOB QUEUE SCENARIO";
        cout<<"\n 4. EXIT ";
        cout<<"\n ENTER YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
            case 1 : 
                cout<<"\n ENTER THE JOB NUMBER : ";
                cin>>x;
                s1.insert(x);
                break;
            
            case 2 :
                x=s1.delete1();
                if(x>0)
                {cout<<"\n JOB NUMBER "<<x<<" IS DELETED....\n (DELETED FROM THE QUE";
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