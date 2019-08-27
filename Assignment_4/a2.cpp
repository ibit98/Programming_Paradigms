//
// Created by INDRANIL on 14-03-2019.
//
#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#define max 50
using namespace std;
class person{
private:
    char *name;
    int age;
    char gender;
public:
    person(){
        name=new char[max];
        age=0;
        gender='X';
    }
    person(string n,int a=0,char g='X'):age(a),gender(g){
        this->name=new char[n.length()+1];
        for(int i=0;i<n.length();i++){
            this->name[i]=n[i];
        }
    }
    person(const person &p):age(p.age),gender(p.gender){
        this->name=new char[strlen(p.name)+1];
        strcpy(this->name,p.name);
    }
    person& operator =(const person & p){
        if(this==&p){
            return *this;
        }
        delete []this->name;
        this->name=new char[strlen(p.name)+1];
        strcpy(this->name,p.name);
        this->age=p.age;
        this->gender=p.gender;
        return *this;
    }
    void getdata(){
        cout<<"Enter name\n";
        cin>>this->name;
        cout<<"Enter age\n";
        cin>>this->age;
        cout<<"Enter Gender(M/F/O)\n";
        cin>>this->gender;
    }
    void putdata(){
        cout<<"The name of the person is "<<this->name<<endl;
        cout<<"The age of the person is "<<this->age<<endl;
        cout<<"The gender of the person is "<<this->gender<<endl;
    }
    ~person(){
        delete []name;
    }
};
class student:public person{
private:
    char *dept;
    int year;
public:
    student():year(1990){
        dept=new char[max];
    }
    student(string n,int a,char g,string d,int y):year(y),person(n,a,g){
        this->dept=new char[d.length()+1];
        for(int i=0;i<d.length();i++){
            this->dept[i]=d[i];
        }
    }
    student(const student &s):year(s.year),person(s){
        this->dept=new char[strlen(s.dept)+1];
        strcpy(this->dept,s.dept);
    }
    student & operator=(const student & s){
        if(this==&s){
            return *this;
        }
        person::operator=(s);
        delete []this->dept;
        this->year=s.year;
        this->dept=new char[strlen(s.dept)+1];
        strcpy(this->dept,s.dept);
        return *this;
    }
    void getdata(){
        person::getdata();
        cout<<"Enter dept\n";
        cin>>this->dept;
        cout<<"Enter year\n";
        cin>>this->year;
    }
    void putdata(){
        person::putdata();
        cout<<"The dept. of the student is "<<this->dept<<endl;
        cout<<"The year of the student is "<<this->year<<endl;
    }
    ~student(){
        delete []dept;
    }
};
class clerk:public person{
private:
    char *wkload;
    int salary;
public:
    clerk():salary(0){
        wkload=new char[max];
    }
    clerk(string n,int a,char g,string d,int y):salary(y),person(n,a,g){
        this->wkload=new char[d.length()+1];
        for(int i=0;i<d.length();i++){
            this->wkload[i]=d[i];
        }
    }
    clerk(const clerk &s):salary(s.salary),person(s){
        this->wkload=new char[strlen(s.wkload)+1];
        strcpy(this->wkload,s.wkload);
    }
    clerk & operator=(const clerk & s){
        if(this==&s){
            return *this;
        }
        person::operator=(s);
        delete []this->wkload;
        this->salary=s.salary;
        this->wkload=new char[strlen(s.wkload)+1];
        strcpy(this->wkload,s.wkload);
        return *this;
    }
    void getdata(){
        person::getdata();
        cout<<"Enter workload\n";
        cin>>this->wkload;
        cout<<"Enter salary\n";
        cin>>this->salary;
    }
    void putdata(){
        person::putdata();
        cout<<"The workload of the clerk is "<<this->wkload<<endl;
        cout<<"The salary of the clerk is "<<this->salary<<endl;
    }
    ~clerk(){
        delete []wkload;
    }
};
class professor:public person{
private:
    char *crload;
    char *dept;
    int salary;
public:
    professor():salary(0){
        crload=new char[max];
        dept=new char[max];
    }
    professor(string n,int a,char g,string d,string c,int y):salary(y),person(n,a,g){
        this->crload=new char[c.length()+1];
        for(int i=0;i<c.length();i++){
            this->crload[i]=c[i];
        }
        this->dept=new char[d.length()+1];
        for(int i=0;i<d.length();i++){
            this->dept[i]=d[i];
        }
    }
    professor(const professor &s):salary(s.salary),person(s){
        this->crload=new char[strlen(s.crload)+1];
        strcpy(this->crload,s.crload);
        this->dept=new char[strlen(s.dept)+1];
        strcpy(this->dept,s.dept);
    }
    professor & operator=(const professor & s){
        if(this==&s){
            return *this;
        }
        person::operator=(s);
        delete []this->crload;
        delete []this->dept;
        this->salary=s.salary;
        this->crload=new char[strlen(s.crload)+1];
        strcpy(this->crload,s.crload);
        this->dept=new char[strlen(s.dept)+1];
        strcpy(this->dept,s.dept);
        return *this;
    }
    void getdata(){
        person::getdata();
        cout<<"Enter dept\n";
        cin>>this->dept;
        cout<<"Enter courseload\n";
        cin>>this->crload;
        cout<<"Enter salary\n";
        cin>>this->salary;
    }
    void putdata(){
        person::putdata();
        cout<<"The dept. of the professor is "<<this->dept<<endl;
        cout<<"The courseload of the professor is"<<this->crload<<endl;
        cout<<"The salary of the professor is "<<this->salary<<endl;
    }
    ~professor(){
        delete []crload;
        delete []dept;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    student s2(s1);
    s2.putdata();
    clerk c1;
    c1.getdata();
    c1.putdata();
    clerk c2(c1);
    c2.putdata();
    professor p1;
    p1.getdata();
    p1.putdata();
    professor p2(p1);
    p2.putdata();
}