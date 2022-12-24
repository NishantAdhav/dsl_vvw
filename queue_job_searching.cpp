#include<iostream>
using namespace std;

int n=20;

class queue
{
    int*arr;
    int front;
    int back;
    public:

    queue()
    { 
        arr=new int[n];
        front =-1;         //initial values of front and back are -1.
        back=-1;
    }



    int push (int x)
    {
        if(back==n-1)
        {
            cout<<"queue overflow.\n queue me bilkul jageh nahi he.\n you can't insert element."<<endl;
            return -1;
        }
        back++;
        arr[back]=x;

        if(front==-1)       //case in which you want to insert first element.
        {
            front++;
        }
    }

    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"No elements in queue."<<endl;
            return;
        }
        front++;
    }

   

    void display()
    {
      if(front==-1 || front>back)
      {
          cout<<"queue is empty."<<endl;
      }
      if(front==back)
      {
         cout<<arr[front];
      }
      else
      cout<<"Job queue is:"<<endl;
      {
       for(int i=front;i<=back;i++)
       cout<<arr[i]<<" "<<endl;
      }
    }

};

int main()
{
    queue q;
    int ch,element;
    cout<<"ENTER THE CHOICE."<<endl;
    cout<<"1)Push element in queue(enqueue)."<<endl;
    cout<<"2)Pop element from the queue"<<endl;
    cout<<"3)Display queue."<<endl;
    cout<<"4)Exit."<<endl;
    
    do
    {
        cout<<"Enter the choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"enter the job element:"<<endl;
                cin>>element;
                q.push(element);
                break;
            }

            case 2:
            {
                q.pop();
                break;
            }
            
            case 3:
            {
                q.display();
                break;
            }

            case 4:
            {
                cout<<"Exit."<<endl;
                break;
            }

            default:
            {
                cout<<"invalid choice."<<endl;
            }

        }


    }
    while(ch!=4);

    return 0;
}