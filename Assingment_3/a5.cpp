//
// Created by INDRANIL on 30-01-2019.
//
#include <iostream>
#include "myclass.h"
using namespace std;
int main()
{
    int e,c,x;
    poly a(NULL),b(NULL),d(NULL);
    node *n;
    do
    {
        cout<<"Press 1 to Add terms in polynomial One\nPress 2 to Add terms in polynomial Two\nPress 3 to Add both polynomial\nPress 4 to Exit\n";
        cin>>x;
        switch(x)
        {
            case 1:{
                cout<<"Enter exponent and coefficient\n";
                cin>>e>>c;
                a.addnode(e,c);
                break;
            }
            case 2:{
                cout<<"Enter exponent and coefficient\n";
                cin>>e>>c;
                b.addnode(e,c);
                break;
            }
            case 3:{
                d=a+b;
                n=d.gethead();
                while(n)
                {
                    cout<<"+ ("<<n->getco()<<"x^"<<n->getexp()<<") ";
                    n=n->getnx();
                }
                break;
            }
            default:break;
        }
    }while(x!=4);
}
