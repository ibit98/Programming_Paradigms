#include<iostream>
using namespace std;
typedef struct
{
	int data;
	char c;
}stu;
inline void swap(int *x,int *y){ int t;t=*x;*x=*y;*y=t;}
inline void swap(short *x,short *y){ short t;t=*x;*x=*y;*y=t;}
inline void swap(float *x, float *y){float t;t=*x;*x=*y;*y=t;}
inline void swap(double *x,double *y){double t;t=*x;*x=*y;*y=t;}
inline void swap(stu *x,stu *y){stu t;t=*x;*x=*y;*y=t;}
int main()
{
	int i;
	do
	{
		cout<<"Choose \n1.int\n2.short\n3.float\n4.double\n5.struct\n6.Exit\n";
		cin>>i;
		switch(i)
		{
			case 1:{
				int x,y;
				cout<<"Enter int x and y\n";
				cin>>x>>y;
				swap(x,y);
				cout<<"x : "<<x<<"\ny : "<<y<<endl;
                break;
				}
			case 2:{
				short x,y;
				cout<<"Enter short x and y\n";
				cin>>x>>y;
				swap(x,y);
				cout<<"x : "<<x<<"\ny : "<<y<<endl;
				break;
				}
			case 3:{
				float x,y;
				cout<<"Enter float x and y\n";
				cin>>x>>y;
				swap(x,y);
				cout<<"x : "<<x<<"\ny : "<<y<<endl;
				break;
				}
			case 4:{
                double x,y;
				cout<<"Enter double x and y\n";
				cin>>x>>y;
				swap(x,y);
				cout<<"x : "<<x<<"\ny : "<<y<<endl;
				break;
				}
			case 5:{
                stu x,y;
				cout<<"Enter struct x and y\n";
				cin>>x.data>>x.c>>y.data>>y.c;
				swap(x,y);
				cout<<"x : "<<x.data<<" "<<x.c<<"\ny : "<<y.data<<" "<<y.c<<endl;
				break;
				}
			}
	}
	while(i!=6);
}