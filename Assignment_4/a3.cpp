//
// Created by INDRANIL on 18-03-2019.
//
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define max 50
using namespace std;
class shape{
private:
public:
    virtual void getdata() =0;
    virtual void putdata() =0;
    virtual double area() =0;
    ~shape() = default;
};
class rectangle:public shape{
private:
    int width;
    int height;
public:
    rectangle(){
        this->width=0;
        this->height=0;
    }
    rectangle(int w,int h){
        this->width=w;
        this->height=h;
    }
    rectangle(const rectangle &r){
        this->width=r.width;
        this->height=r.height;
    }
    rectangle &operator=(const rectangle &r){
        if(this==&r){
            return *this;
        }
        this->width=r.width;
        this->height=r.height;
        return *this;
    }
    void getdata(){
        cout<<"Enter width\n";
        cin>>this->width;
        cout<<"Enter height\n";
        cin>>this->height;
    }
    void putdata() {
        cout<<"The width and height of the rectangle is "<<this->width<<" and "<<this->height<<endl;
    }
    double area(){
        return cout<<"The area of the rectangle is "<<width*height<<endl , width*height;
    }
    ~rectangle() = default;
};
class circle:public shape{
private:
    int radius;
public:
    circle(){
        this->radius=0;
    }
    circle(int r){
        this->radius=r;
    }
    circle(const circle &r){
        this->radius=r.radius;
    }
    circle &operator=(const circle &c){
        if(this==&c){
            return *this;
        }
        this->radius=c.radius;
        return *this;
    }
    void getdata(){
        cout<<"Enter radius\n";
        cin>>this->radius;
    }
    double area(){
        return cout<<"The area of the circle is "<<3.14*radius*radius<<endl , 3.14*radius*radius;
    }
    void putdata() {
        cout<<"The radius of the circle is "<<this->radius<<endl;
    }
    ~circle(){

    }
};
class triangle:public shape{
private:
    int *side;
public:
    triangle(){
        this->side=new int[3];
    }
    triangle(int a,int b,int c){
        this->side=new int[3];
        side[0]=a;
        side[1]=b;
        side[2]=c;
    }
    triangle(const triangle &t){
        this->side=new int[3];
        for(int i=0;i<3;i++){
            this->side[i]=t.side[i];
        }
    }
    triangle &operator=(const triangle &t){
        if(this==&t){
            return *this;
        }
        delete []this->side;
        for(int i=0;i<3;i++){
            this->side[i]=t.side[i];
        }
        return *this;
    }
    void getdata(){
        cout<<"Enter sides\n";
        for(int i=0;i<3;i++){
            cin>>this->side[i];
        }
    }
    double area(){
        int s=(side[0]+side[1]+side[2])/2;
        double a=sqrt(s*(s-side[0])*(s-side[1])*(s-side[2]));
        return cout<<"The area of the triangle is "<<(double)sqrt(s*(s-side[0])*(s-side[1])*(s-side[2]))<<endl , (double)sqrt(s*(s-side[0])*(s-side[1])*(s-side[2]));
    }
    void putdata() {
        cout<<"The sides of the triangle are "<<side[0]<<" , "<<side[1]<<" & "<<side[2]<<endl;
    }
    ~triangle(){
        delete []this->side;
    }
};
int main()
{
    int count;
    double totalarea=0;
    cout<<"Enter the total number of shapes\n";
    cin>>count;
    shape *shapes[count];
    for(int i=0,j;i<count;i++)
    {
        cout<<"Enter the type of shape :\n1.Rectangle\n2.Triangle\n3.Circle\n";
        cin>>j;
        switch(j)
        {
            case 1:
                shapes[i]=new rectangle;
                shapes[i]->getdata();
                shapes[i]->putdata();
                totalarea+=shapes[i]->area();
                break;
            case 2:
                shapes[i]=new triangle;
                shapes[i]->getdata();
                totalarea+=shapes[i]->area();
                break;
            case 3:
                shapes[i]=new circle;
                shapes[i]->getdata();
                totalarea+=shapes[i]->area();
                break;
            default:
                cout<<"Wrong Choice.Enter valid choice\n";
                break;
        }
    }
    cout<<"The total area of the figures is "<<totalarea<<endl;
    return 0;
}