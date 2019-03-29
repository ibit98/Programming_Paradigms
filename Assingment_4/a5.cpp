//
// Created by INDRANIL on 19-03-2019.
//
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define max 50
using namespace std;
class cricketer{
private:
    char *name;
    char *nation;
    int age;
    int match;
    string *c;
public:
    cricketer(){
        name=new char[max];
        nation=new char[max];
        c=new string[max];
        age=0;
        match=0;
    }
    cricketer(string n,string nat,int a):age(a),match(0){
        name=new char[n.length()+1];
        for(int i=0;i<n.length();i++){
            this->name[i]=n[i];
        }
        nation=new char[nat.length()+1];
        for(int i=0;i<nat.length();i++){
            this->nation[i]=nat[i];
        }
    }
    cricketer(const cricketer& c):age(c.age),match(c.match){
        this->name=new char[strlen(c.name)+1];
        strcpy(this->name,c.name);
        this->nation=new char[strlen(c.nation)+1];
        strcpy(this->nation,c.nation);
    }
    void getdata(){
        cout<<"Enter name\n";
        cin>>this->name;
        cout<<"Enter nationality\n";
        cin>>this->nation;
        cout<<"Enter the age\n";
        cin>>this->age;
        cout<<"Enter no. of matches played\n";
        cin>>this->match;
    }
    void putdata(){
        cout<<"The name of the cricketer is "<<this->name<<endl;
        cout<<"The nationality of the cricketer is "<<this->nation<<endl;
        cout<<"The age of the cricketer is "<<this->age<<endl;
        cout<<"The no. of matches played by the cricketer is "<<this->match<<endl;
    }
    ~cricketer(){
        delete []name;
        delete []nation;
    }
};
class batsman:public cricketer{
private:
    int *bat_rec;
};
int main()
{

}
