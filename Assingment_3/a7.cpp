//
// Created by INDRANIL on 31-01-2019.
//
#include <iostream>
#include "myclass.h"
using namespace std;
void display(matrix t)
{
    cout<<"The resulting maatrix is\n";
    int **data=t.putdata();
    for(int i=0;i<t.putr();i++)
    {
        for(int j=0;j<t.putc();j++)
        {
            cout<<data[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int co=0;
    int a,r,c,x,y,p;
    matrix *s=new matrix[max];
    int **data;
    do
    {
        cout<<"1.Add a Matrix\n2.Addition\n3.Multiplication\n4.Test Equality\n5.Transpose\n6.Create Sub matrix\n7.Inverse\n8.Exit\n";
        cin>>a;
        switch(a)
        {
            case 1:{
                cout<<"Enter row and coloum of the matrix\n";
                cin>>r>>c;
                data=new int*[r];
                for(int i=0;i<r;i++)
                {
                    data[i]=new int[c];
                }
                matrix m(r,c);
                for(int i=0;i<r;i++) {
                    for (int j = 0; j < c; j++) {
                        cin >> data[i][j];
                    }
                }
                m.getdata(data);
                s[co++]=m;
                display(s[co-1]);
                break;
            }
            case 2:{
                cout<<"Enter first matrix no.\n";
                cin>>x;
                cout<<"Enter second matrix no.\n";
                cin>>y;
                matrix temp;
                temp=(s[x-1] + s[y-1]);
                s[co++]=temp;
                display(s[co-1]);
                break;
            }
            case 3:{
                cout<<"Enter first matrix no.\n";
                cin>>x;
                cout<<"Enter second matrix no.\n";
                cin>>y;
                matrix temp;
                temp=(s[x-1] * s[y-1]);
                s[co++]=temp;
                display(s[co-1]);
                break;
            }
            case 4:{
                cout<<"Enter first matrix no.\n";
                cin>>x;
                cout<<"Enter second matrix no.\n";
                cin>>y;
                if(s[x-1]==s[y-1])
                {
                    cout<<"Both matrices are Same\n";
                }
                else
                {
                    cout<<"Both matrices are Not Same\n";
                }
                break;
            }
            case 5:{
                cout<<"Enter matrix no. which is to be transposed\n";
                cin>>x;
                matrix temp;
                temp=s[x-1].tranpose() ;
                s[co++]=temp;
                display(s[co-1]);
                break;
            }
            case 6:{
                cout<<"Enter matrix no.\n";
                cin>>p;
                cout<<"Enter row and coloum of the sub-matrix\n";
                cin>>r>>c;
                cout<<"Enter starting index of sub-matrix\n";
                cin>>x>>y;
                matrix temp;
                temp=s[p-1].sub(x,y,r,c);
                s[co++]=temp;
                display(s[co-1]);
                break;
            }
            case 7:{
                cout<<"Enter matrix no.\n";
                cin>>p;
                if(s[p-1].det(s[p-1].putdata(),s[p-1].putr()))
                {
                    cout<<s[p-1].det(s[p-1].putdata(),s[p-1].putr())<<endl;
                    // matrix temp=s[p-1].inverse();
                }
                else
                {
                    cout<<"Inverse does not exist\n";
                }
                break;
            }
        }
    }while(a!=8);
}
