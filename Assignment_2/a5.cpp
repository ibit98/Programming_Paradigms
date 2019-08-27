#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 1000
using namespace std;
typedef struct stu
{
    int data;
}stu;
template<typename T>
struct stack
{
    int size;
    int count;
    T *data;
};
template<typename T>
stack<T> createstack(int n=10)
{
    stack<T> s;
    s.size=n;
    s.count=0;
    s.data=new T[n];
    return s;
}
template<typename T>
int pushintstack(stack<T> &s,T x)
{
    if(s.size==s.count)
    {
        return 0;
    }
    else
    {
        s.count++;
        s.data[s.count-1]=x;
        return 1;
    }
}
template<typename T>
int popintstack(stack<T> &s)
{
    if(s.count==0)
    {
        return 0;
    }
    else
    {
        s.count--;
        return 1;
    }
}
template<typename T>
inline int getmaxsize(stack<T> &s,int &x)
{
    if(1)
    {
        x=s.size;
        return 1;
    }
}
template<typename T>
inline int currentsize(stack<T> &s,int &x)
{
    if(1)
    {
        x=s.count;
        return 1;
    }
}
template<typename T>
inline int isintstackempty(stack<T> &s)
{
    if(s.count==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int r,x1;
    do
    {
        cout<<"Choose \n1.int\n2.short\n3.float\n4.double\n5.struct\n6.Exit\n";
        cin>>r;
        switch(r)
        {
            case 1:{
                int a,i=0,i1,n,x;
                stack<int> *s1;
                s1=new stack<int>[max];
                do
                {
                    cout<<"Please choose any operation\n";
                    cout<<"Press 1 for creat stack\nPress 2 for push item\nPress 3 for pop\nPress 4 to get maximum size\nPress 5 to get current size\nPress 6 to check the stack is empty or not\nPress 7 for exit\n";
                    cin>>a;
                    switch(a)
                    {
                        case 1:{
                            cout<<"Enter the size of the stack\n";
                            cin>>n;
                            s1[i]=createstack<int>(n);
                            i++;
                            break;
                        }
                        case 2:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            cout<<"Enter the item to push\n";
                            cin>>x;
                            if(pushintstack<int>(s1[i1],x))
                            {
                                cout<<"Item is pushed to the stack\n";
                            }
                            else
                            {
                                cout<<"Cant push.Stack is overflow\n";
                            }break;
                        }
                        case 3:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(popintstack<int>(s1[i1]))
                            {
                                cout<<"Item is popt out of the stack\n";
                            }
                            else
                            {
                                cout<<"Cant pop.Stack is underflow\n";
                            }break;
                        }
                        case 4:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(getmaxsize<int>(s1[i1],x))
                            {
                                cout<<"The maximum size is "<<x<<endl;
                            }
                            else
                            {
                                cout<<"Stack does not exist\n";
                            }break;
                        }
                        case 5:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(currentsize<int>(s1[i1],x))
                            {
                                cout<<"Current size of the stack is "<<x<<endl;
                            }
                            else
                            {
                                cout<<"Stack is not found\n";
                            }break;
                        }
                        case 6:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(isintstackempty<int>(s1[i1]))
                            {
                                cout<<"Stack is empty\n";
                            }
                            else
                            {
                                cout<<"Stack is not empty\n";
                            }break;
                        }
                    }
                }
                while(a!=7);

            }
            case 2:{
                int a,i=0,i1,n;
                short x;
                stack<short> *s1;
                s1=new stack<short>[max];
                do
                {
                    cout<<"Please choose any operation\n";
                    cout<<"Press 1 for creat stack\nPress 2 for push item\nPress 3 for pop\nPress 4 to get maximum size\nPress 5 to get current size\nPress 6 to check the stack is empty or not\nPress 7 for exit\n";
                    cin>>a;
                    switch(a)
                    {
                        case 1:{
                            cout<<"Enter the size of the stack\n";
                            cin>>n;
                            s1[i]=createstack<short>(n);
                            i++;
                            break;
                        }
                        case 2:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            cout<<"Enter the item to push\n";
                            cin>>x;
                            if(pushintstack<short>(s1[i1],x))
                            {
                                cout<<"Item is pushed to the stack\n";
                            }
                            else
                            {
                                cout<<"Cant push.Stack is overflow\n";
                            }break;
                        }
                        case 3:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(popintstack<short>(s1[i1]))
                            {
                                cout<<"Item is popt out of the stack\n";
                            }
                            else
                            {
                                cout<<"Cant pop.Stack is underflow\n";
                            }break;
                        }
                        case 4:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(getmaxsize<short>(s1[i1],x1))
                            {
                                cout<<"The maximum size is "<<x1<<endl;
                            }
                            else
                            {
                                cout<<"Stack does not exist\n";
                            }break;
                        }
                        case 5:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(currentsize<short>(s1[i1],x1))
                            {
                                cout<<"Current size of the stack is "<<x1<<endl;
                            }
                            else
                            {
                                cout<<"Stack is not found\n";
                            }break;
                        }
                        case 6:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(isintstackempty<short>(s1[i1]))
                            {
                                cout<<"Stack is empty\n";
                            }
                            else
                            {
                                cout<<"Stack is not empty\n";
                            }break;
                        }
                    }
                }
                while(a!=7);
            }
            case 3:{
                int a,i=0,i1,n;
                float x;
                stack<float> *s1;
                s1=new stack<float>[max];
                do
                {
                    cout<<"Please choose any operation\n";
                    cout<<"Press 1 for creat stack\nPress 2 for push item\nPress 3 for pop\nPress 4 to get maximum size\nPress 5 to get current size\nPress 6 to check the stack is empty or not\nPress 7 for exit\n";
                    cin>>a;
                    switch(a)
                    {
                        case 1:{
                            cout<<"Enter the size of the stack\n";
                            cin>>n;
                            s1[i]=createstack<float>(n);
                            i++;
                            break;
                        }
                        case 2:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            cout<<"Enter the item to push\n";
                            cin>>x;
                            if(pushintstack<float>(s1[i1],x))
                            {
                                cout<<"Item is pushed to the stack\n";
                            }
                            else
                            {
                                cout<<"Cant push.Stack is overflow\n";
                            }break;
                        }
                        case 3:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(popintstack<float>(s1[i1]))
                            {
                                cout<<"Item is popt out of the stack\n";
                            }
                            else
                            {
                                cout<<"Cant pop.Stack is underflow\n";
                            }break;
                        }
                        case 4:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(getmaxsize<float>(s1[i1],x1))
                            {
                                cout<<"The maximum size is "<<x1<<endl;
                            }
                            else
                            {
                                cout<<"Stack does not exist\n";
                            }break;
                        }
                        case 5:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(currentsize<float>(s1[i1],x1))
                            {
                                cout<<"Current size of the stack is "<<x1<<endl;
                            }
                            else
                            {
                                cout<<"Stack is not found\n";
                            }break;
                        }
                        case 6:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(isintstackempty<float>(s1[i1]))
                            {
                                cout<<"Stack is empty\n";
                            }
                            else
                            {
                                cout<<"Stack is not empty\n";
                            }break;
                        }
                    }
                }
                while(a!=7);
            }
            case 4:{
                int a,i=0,i1,n;
                double x;
                stack<double> *s1;
                s1=new stack<double>[max];
                do
                {
                    cout<<"Please choose any operation\n";
                    cout<<"Press 1 for creat stack\nPress 2 for push item\nPress 3 for pop\nPress 4 to get maximum size\nPress 5 to get current size\nPress 6 to check the stack is empty or not\nPress 7 for exit\n";
                    cin>>a;
                    switch(a)
                    {
                        case 1:{
                            cout<<"Enter the size of the stack\n";
                            cin>>n;
                            s1[i]=createstack<double>(n);
                            i++;
                            break;
                        }
                        case 2:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            cout<<"Enter the item to push\n";
                            cin>>x;
                            if(pushintstack<double>(s1[i1],x))
                            {
                                cout<<"Item is pushed to the stack\n";
                            }
                            else
                            {
                                cout<<"Cant push.Stack is overflow\n";
                            }break;
                        }
                        case 3:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(popintstack<double>(s1[i1]))
                            {
                                cout<<"Item is popt out of the stack\n";
                            }
                            else
                            {
                                cout<<"Cant pop.Stack is underflow\n";
                            }break;
                        }
                        case 4:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(getmaxsize<double>(s1[i1],x1))
                            {
                                cout<<"The maximum size is "<<x1<<endl;
                            }
                            else
                            {
                                cout<<"Stack does not exist\n";
                            }break;
                        }
                        case 5:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(currentsize<double>(s1[i1],x1))
                            {
                                cout<<"Current size of the stack is "<<x1<<endl;
                            }
                            else
                            {
                                cout<<"Stack is not found\n";
                            }break;
                        }
                        case 6:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(isintstackempty<double>(s1[i1]))
                            {
                                cout<<"Stack is empty\n";
                            }
                            else
                            {
                                cout<<"Stack is not empty\n";
                            }break;
                        }
                    }
                }
                while(a!=7);

            }
            case 5:{
                int a,i=0,i1,n;
                stu x;
                stack<stu> *s1;
                s1=new stack<stu>[max];
                do
                {
                    cout<<"Please choose any operation\n";
                    cout<<"Press 1 for creat stack\nPress 2 for push item\nPress 3 for pop\nPress 4 to get maximum size\nPress 5 to get current size\nPress 6 to check the stack is empty or not\nPress 7 for exit\n";
                    cin>>a;
                    switch(a)
                    {
                        case 1:{
                            cout<<"Enter the size of the stack\n";
                            cin>>n;
                            s1[i]=createstack<stu>(n);
                            i++;
                            break;
                        }
                        case 2:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            cout<<"Enter the item to push\n";
                            cin>>x.data;
                            if(pushintstack<stu>(s1[i1],x))
                            {
                                cout<<"Item is pushed to the stack\n";
                            }
                            else
                            {
                                cout<<"Cant push.Stack is overflow\n";
                            }break;
                        }
                        case 3:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(popintstack<stu>(s1[i1]))
                            {
                                cout<<"Item is popt out of the stack\n";
                            }
                            else
                            {
                                cout<<"Cant pop.Stack is underflow\n";
                            }break;
                        }
                        case 4:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(getmaxsize<stu>(s1[i1],x1))
                            {
                                cout<<"The maximum size is "<<x1<<endl;
                            }
                            else
                            {
                                cout<<"Stack does not exist\n";
                            }break;
                        }
                        case 5:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(currentsize<stu>(s1[i1],x1))
                            {
                                cout<<"Current size of the stack is "<<x1<<endl;
                            }
                            else
                            {
                                cout<<"Stack is not found\n";
                            }break;
                        }
                        case 6:{
                            cout<<"Enter the stack no.\n";
                            cin>>i1;
                            if(isintstackempty<stu>(s1[i1]))
                            {
                                cout<<"Stack is empty\n";
                            }
                            else
                            {
                                cout<<"Stack is not empty\n";
                            }break;
                        }
                    }
                }
                while(a!=7);

            }
        }
    }while(r!=6);

}