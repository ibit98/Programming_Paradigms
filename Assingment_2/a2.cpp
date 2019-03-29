#include<iostream>
using namespace std;
#define max 100
struct stack
{
	int size;
	int count;
	int *data;
};
stack createstack(int n=10)
{
	stack s;
	s.size=n;
	s.count=0;
	s.data=new int[n];
	return s;
}
int pushintstack(stack &s,int d)
{
	if(s.size==s.count)
	{
		return 0;
	}
	else
	{
		s.count++;
		s.data[s.count-1]=d;
		return 1;
	}
}
int popintstack(stack &s,int &dp)
{
	if(s.count==0)
	{
		return 0;
	}
	else
	{
		dp=s.data[s.count-1];
		s.count--;
		return 1;
	}
}
inline int getmaxsize(stack &s,int &x)
{
    if(1)
    {
        x=s.size;
        return 1;
    }
}
inline int currentsize(stack &s,int &x)
{
    if(1)
    {
        x=s.count;
        return 1;
    }
}
inline int isintstackempty(stack &s)
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
	int a,i=0,i1,x,n;
	stack *s1;
    s1=new stack[max];
	do
	{
		cout<<"Please choose any operation\n";
		cout<<"Press 1 for creat integer stack\nPress 2 for push item\nPress 3 for pop\nPress 4 to get maximum size\nPress 5 to get current size\nPress 6 to check the stack is empty or not\nPress 7 for exit\n";
		cin>>a;
		switch(a)
		{
			case 1:{
				cout<<"Enter the size of the stack\n";
				cin>>n;
				s1[i]=createstack(n);
                i++;
                break;
				}
			case 2:{
				cout<<"Enter the item to push\n";
				cin>>x;
                cout<<"Enter the stack no.\n";
                cin>>i1;
				if(pushintstack(s1[i1],x))
				{
					cout<<x<<" is pushed to the stack\n";
				}
				else
				{
					cout<<"Cant push.Stack is overflow\n";
				}break;
				}
			case 3:{
				int dp;
                cout<<"Enter the stack no.\n";
                cin>>i1;
				if(popintstack(s1[i1],dp))
				{
					cout<<dp<<" is popt out of the stack\n";
				}
				else
				{
					cout<<"Cant pop.Stack is underflow\n";
				}break;
				}
			case 4:{
                cout<<"Enter the stack no.\n";
                cin>>i1;
				if(getmaxsize(s1[i1],x))
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
                if(currentsize(s1[i1],x))
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
                if(isintstackempty(s1[i1]))
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