#include <iostream>
using namespace std;
#define size 6

class Dequeue
{
    private:
    int que[size];
    public:
    int front,rear;
    Dequeue()
    {
        front=-1;
        rear=-1;
        for(int i=0;i<size;i++)
        que[i]=-1;
    }

    void insert_front(int x)
    {
        if((front==0 && rear==size-1) || (front==rear+1))    //conditon when queue is full.
        {
            cout<<"queue id full."<<endl;
        }
        else if(front==-1 && rear==-1)                    //when queue is totally empty.
        {
            front=rear=0;
            que[front]=x;
        }
        else if(front==0)                         //if front is at 0,jump to the last index.
        {
        front=size-1;
        que[front]=x;
        }
        else                                     //in all other normal cases.
        {
            front--;
            que[front]=x;
        }
    }

    void insert_rear(int x)
    {
     if((front==0) && (rear==size-1) || (front==rear+1))    //conditon when queue is full.
        {
            cout<<"queue id full."<<endl;
        }

    else if(front==-1 && rear==-1)
       {
           front=rear=0;
           que[rear]=x;
       }
    else if(rear==size-1)      //set rear =0;
    {
    rear=0;
    que[rear]=x;

    }
    else
    {
        rear++;
        que[rear]=x;
    }
     
    }
    
    void display()
    {
        int i=front;
        while(i!=rear)                 //*
        {
            cout<<que[i]<<" ";
            i=(i+1)%size;               //
        }
        cout<<que[rear]<<" ";            //this is for displaying rear elemnent(last) .because * conditon will not print last element.
    }


    void delete_front()
    {
      if(front==-1 && rear==-1)
      {
         cout<<"queue iss empty."<<endl;
      }
      else if (front==rear)            //there is only one element in queue.
      {
        front=rear=-1; 
      }
      else if(front==size-1)
      {
         front=0;                       //set front=0, if it is at last index.
      }

      else                              //in any normal case.
      {
         front++;
      }
     


    }

    void delete_rear()
    { 
     if(front==-1 && rear==-1)
      {
         cout<<"queue is empty."<<endl;
      }
      else if (front==rear)            //there is only one element in queue.
      {
        front=rear=-1; 
      }
      else if(rear==0)
      {
          rear=size-1;
      }
      else
      {
          rear--;                    //in any normal case.
      }



    }




};

int main()
{
    Dequeue q;
    int ch,element;
    cout<<"Enter a choice:"<<endl;
    cout<<"1)Insert (Enqueue) element from front."<<endl;
    cout<<"2)delete (enqueue) element from rear."<<endl;
    cout<<"3)Display elements in circular queue."<<endl;
    cout<<"4)delete (dequeue) element from front"<<endl;
    cout<<"5)Delete elements from rear."<<endl;
    cout<<"6)Exit."<<endl;
    do{
        cout<<"Enter a choice:"<<endl;
        cin>>ch;
     switch (ch)
     {
        case 1:
        {
            cout<<"Enter the element to be inserted in queue from front:"<<endl;
            cin>>element;
            q.insert_front(element);
            break;
        }

        case 2:
        {
            cout<<"Enter the element to be inserted in  queue from rear :"<<endl;
            cin>>element;
            q.insert_rear(element);
            break;
          
        }
        case 3:
        {
           q.display();
            break;
        }
        case 4:
        {
           q.delete_front();
            break;
        }
        

         case 5:
        {
           q.delete_rear();
           break; 
        }
        case 6:
        {
           cout<<"exit"<<endl;
           break; 
        }
        default:
        {
            cout<<"Invalid case."<<endl;
        }
        
     }
    }
    while(ch!=6);
    
    
    
    return 0;

    
}