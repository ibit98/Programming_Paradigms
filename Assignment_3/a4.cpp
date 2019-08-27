//
// Created by INDRANIL on 29-01-2019.
//
#include<iostream>
#include "myclass.h"
#define max 100
using namespace std;
int main() {
    static int i = 0;
    int a, i1, x, n,*l;
    stack<int> *s1[max];
    do {
        cout<<"1.Create\n2.Push\n3.Pop\n4.Get Max Size\n5.Current Size\n6.Empty or not\n7.Display\n8.Copy Stack\n9.Update\n10.Count no. of Stacks\n11.Add Stacks\n12.Exit\n";
        cin >> a;
        switch (a) {
            case 1: {
                if(i==max)
                {
                    cout<<"Can't created more.Maximum no of Stacks Reached.\n";
                    break;
                }
                cout << "Enter size of the stack\n";
                cin >> x;
                stack<int> s(x);
                s1[i++] = &s;
                break;
            }
            case 2: {
                cout<<"Enter the Stack no.\n";
                cin>>i1;
                cout<<"Enter the element\n";
                cin>>n;
                s1[i1-1]->push(n) ? cout << n << " is pushed\n" : cout << "Cant push.Stack overflowed\n";
                break;
            }
            case 3: {
                cout<<"Enter the Stack no.\n";
                cin>>i1;
                s1[i1-1]->pop(n) ? cout << n << " is popt out\n" : cout << "Cant pop.Stack underflow\n";
                break;
            }
            case 4: {
                cout<<"Enter the Stack no.\n";
                cin>>i1;
                cout<<"Max size of the stack is "<<s1[i1-1]->maxsize()<<endl;
                break;
            }
            case 5: {
                cout<<"Enter the Stack no.\n";
                cin>>i1;
                cout<<"Current size of the stack is "<<s1[i1-1]->currentsize()<<endl;
                break;
            }
            case 6: {
                cout<<"Enter the Stack no.\n";
                cin>>i1;
                cout << (s1[i1 - 1]->isempty() ? "Stack is empty\n" : "Stack is Not empty\n");
                break;
            }
            case 7: {
                cout<<"Enter the Stack no.\n";
                cin>>i1;
                l=s1[i1 - 1]->display();
                for(int j=s1[i1-1]->currentsize()-1;j>=0;j--)
                {
                    cout<<l[j]<<endl;
                }
                break;
            }
            case 8: {
                if(i==max)
                {
                    cout<<"Can't created more.Maximum no of Stacks Reached.\n";
                    break;
                }
                cout<<"Enter the Stack no.\n";
                cin>>i1;
                stack<int> temp(*s1[i1-1]);
                s1[i++]=&temp;
                break;
            }
            case 9: {
                cout << "Enter the first  Stack no.\n";
                cin >> x;
                cout << "Enter the second Stack no.\n";
                cin >> n;
                *s1[n - 1] = *s1[x - 1];
                break;
            }
            case 10:{
                cout<<"No of Stacks is "<<i<<endl;
                break;
            }
            case 11:{
                if(i==max)
                {
                    cout<<"Can't created more.Maximum no of Stacks Reached.\n";
                    break;
                }
                cout << "Enter the first  Stack no.\n";
                cin >> x;
                cout << "Enter the second Stack no.\n";
                cin >> n;
                stack<int> te(max);
                te=*s1[n-1]+*s1[x-1];
                s1[i++]=&te;
                cout<<"New stack created with no. "<<i<<endl;
            }
            default:
                break;
        }
    } while (a != 12);
}
