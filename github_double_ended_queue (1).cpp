#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
typedef class double_ended_queue
{
    int front ;
    int rear;
    int capacity;
    int *arr;
public:

    void creat(int key)
    {
        capacity=key;
        arr= new int[capacity];
        rear=capacity/2;
        front=capacity/2+1;
    }
    void insert_back(int data)
    {
        rear++;
        arr[rear]=data;
    }
    void remove_back()
    {
        rear--;
    }
    void insertat_front(int data)
    {
        front--;
        arr[front]=data;
    }
    void removeat_front()
    {
        front++;
    }
    void display()
    {
        for(int i=front; i<=rear; i++)
        {
            cout<<" "<<arr[i];
        }
        getch();
    }
} queue;
int main()
{
    queue q1;
    int cmd,c,data1,data2;

    while(1)
    {
        clrscr();
        cout<<"+---------------------------------+"<<endl;
        cout<<"|  +---------------------------+  |"<<endl;
        cout<<"|  |  [~double_ended_queue~]   |  |"<<endl;
        cout<<"|  +---------------------------+  |"<<endl;
        cout<<"+---------------------------------+"<<endl;
        cout<<"1.creat the queue"<<endl;
        cout<<"2.insert at front"<<endl;
        cout<<"3.insert at back"<<endl;
        cout<<"4.remove at front"<<endl;
        cout<<"5.remove at back"<<endl;
        cout<<"6.display"<<endl;
        cout<<"7.exit"<<endl;
        cout<<"enter the command=>>"<<endl;
        cin>>cmd;
        switch(cmd)
        {
        case 1:
            cout<<"enter the capacity=>"<<endl;
            cin>>c;
            q1.creat(c);
            break;
        case 2:
            cout<<"enter the data=>"<<endl;
            cin>>data1;
            q1.insertat_front(data1);
            break;
        case 3:
            cout<<"enter the data=>"<<endl;
            cin>>data2;
            q1.insert_back(data2);
            break;
        case 4:
            q1.removeat_front();
            break;
        case 5:
            q1.remove_back();
            break;
        case 6:
            q1.display();
            break;
        case 7:
            return 0;
            break;
        default:
            cout<<"command is not found ?"<<endl;
            break;
        }
        getch();
    }
    return 0;
}