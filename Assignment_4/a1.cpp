//
// Created by INDRANIL on 26-02-2019.
//
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define max 50
using namespace std;
class vehicle{
private:
    int price;
    char *manf;
public:
    vehicle(){
        price=0;
        manf= new char[max];
    }
    vehicle(int p,string m):price(p){
        this->manf=new char[m.length()+1];
        for(int i=0;i<m.length();i++){
            this->manf[i]=m[i];
        }
    }
    vehicle(const vehicle &v):price(v.price){
        this->manf=new char[strlen(v.manf)+1];
        strcpy(this->manf,v.manf);
    }
    vehicle & operator = (const vehicle &v){
        if(this==&v){
            return *this;
        }
        delete []this->manf;
        this->price=v.price;
        this->manf=new char[strlen(v.manf)+1];
        strcpy(this->manf,v.manf);
        return *this;
    }
    void read(){
        cout<<"Enter the price of the vehicle\n";
        cin>>this->price;
        cout<<"Enter the manufacturer\n";
        cin>>this->manf;
    }
    void display(){
        cout<<"The price of the vehicle is "<<this->price<<endl;
        cout<<"The manufcture of the vehicle is "<<this->manf<<endl;
    }
    ~vehicle(){
        delete []manf;
    }
};
class car : public vehicle{
private:
    char *colour;
    int seats;
    char *model;
public:
    car(): seats(0){
        colour=new char[max];
        model=new char[max];
    }
    /*car(string c,int s,string m):seats(s){
        this->colour=new char[c.length()+1];
        for(int i=0;i<c.length();i++){
            this->colour[i]=c[i];
        }
        this->model=new char[m.length()+1];
        for(int i=0;i<m.length();i++){
            this->model[i]=c[i];
        }
    }*/
    car(int p,string manf,string c,int s,string m):seats(s),vehicle(p,manf){
        this->colour=new char[c.length()+1];
        for(int i=0;i<c.length();i++){
            this->colour[i]=c[i];
        }
        this->model=new char[m.length()+1];
        for(int i=0;i<m.length();i++){
            this->model[i]=c[i];
        }
    }
    car(const car &c):seats(c.seats),vehicle(c){
        this->colour=new char[strlen(c.colour)+1];
        strcpy(this->colour,c.colour);
        this->model=new char[strlen(c.model)+1];
        strcpy(this->model,c.model);
    }
    car &operator = (const car &c){
        if(this==&c){
            return *this;
        }
        delete []colour;
        delete []model;
        vehicle::operator=(c);
        this->seats=c.seats;
        colour=new char[strlen(c.colour)+1];
        strcpy(this->colour,c.colour);
        model=new char[strlen(c.model)+1];
        strcpy(this->model,c.model);
        return *this;
    }
    void read(){
        vehicle::read();
        cout<<"Enter the colour of the vehicle\n";
        cin>>this->colour;
        cout<<"Enter the seating capacity of the car\n";
        cin>>this->seats;
        cout<<"Enter the model name of the car\n";
        cin>>this->model;
    }
    void display(){
        vehicle::display();
        cout<<"The colour of the car is "<<this->colour<<endl;
        cout<<"The seating capacity of the car is "<<this->seats<<endl;
        cout<<"The model of the car is "<<this->model<<endl;
    }
    ~car(){
        delete []colour;
        delete []model;
    }
};
int main(){
    vehicle ob,*opb;
    car od,*opd;
    ob.read();
    ob.display();
    od.read();
    od.display();
    car od2=od;
    od2.display();
    car od3;
    od3=od2;
    od3.display();
    car od4(120,"bmw","voli",4,"mt23");
    od4.display();
}