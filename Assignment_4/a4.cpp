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
class s_stack{
private:
    int mx;
    int top;
    shape **a;
public:
    s_stack(){
        top=0;
        mx=max;
        a=new shape*[mx]();
    }
    s_stack(int m){
        top=0;
        mx=m;
        a=new shape*[mx]();
    }
    s_stack(const s_stack& s){
        this->top=s.top;
        this->mx=s.mx;
        this->a=new shape*[this->mx]();
        for(int i=0;i<top;i++){
            a[i]=s.a[i];
        }
    }
    const s_stack operator=(const s_stack &s){
        if(this==&s){
            return *this;
        }
        delete []a;
        this->top=s.top;
        this->mx=s.mx;
        for(int i=0;i<this->top;i++){
            this->a[i]=s.a[i];
        }
        return *this;
    }
    int push(shape *s){
        if(this->top<this->mx){
            a[this->top++]=s;
            return 1;
        }
        else{
            cout<<"Stack Overflowed\n";
            return 0;
        }
    }
    shape *pop(){
        if(this->top>0){
            this->top--;
            return a[top+1];
        }
        else{
            cout<<"Stack Underflowed\n";
            return 0;
        }
    }
    void display(){
        cout<<"Displaying the stack\n";
        for(int i=this->top-1;i>=0;i--){
            a[i]->putdata();
        }
    }
    double t_area(){
        double t=0;
        for(int i=0;i<top;i++){
            t+=a[i]->area();
        }
        return cout<<"The total area is "<<t<<endl , t;
    }
    ~s_stack(){
        delete []a;
    }
};
int main()
{
    rectangle r;
    r.getdata();
    r.putdata();
    triangle t;
    t.getdata();
    t.putdata();
    circle c;
    c.getdata();
    c.putdata();
    s_stack mystack(3);
    mystack.push(&r);
    mystack.push(&t);
    mystack.push(&c);
    mystack.display();
    mystack.t_area();
    mystack.push(&r);
    shape *s=mystack.pop();
    //s->putdata();
}
