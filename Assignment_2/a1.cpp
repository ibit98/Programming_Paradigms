#include<iostream>
using namespace std;
typedef struct student
{
    char name[20];
    int age;
    char dept[20];
    int year;
}student;
void readstudentdata(student &s)
{
    cout<<"Enter the name of the student\n";
    cin.get(s.name,20,'\n');
    cout<<"Enter the age of the student\n";
    cin>>s.age;
    getchar();
    cout<<"Enter the depertment of the student\n";
    cin.get(s.dept,20,'\n');
    cout<<"Enter the year of the student\n";
    cin>>s.year;
}
void printstudentdata(student *s,int n)
{
    cout<<"The informtion of the students are following\n";
    for(int i=0;i<n;i++)
    {
        cout<<"S.No."<<i+1<<".\t";
        cout<<"Name : "<<s[i].name<<"\tAge : "<<s[i].age<<"\tDept : "<<s[i].dept<<"\tYear : "<<s[i].year<<endl;
    }
}
int main()
{
    int i,c=0,n;
    char a;
    cout<<"Please enter number of student\n";
    cin>>n;
    student s[n];
    while(1)
    {
        cout<<"Do you want to continue(y/n)?\n";
        cin>>a;
        if(a=='y')
        {
            cout<<"Press 1 to add new student\n";
            cout<<"Press 2 to print all students\n";
            cin>>i;
            getchar();
            if(i==1)
            {
                readstudentdata(s[c]);
                c++;
            }
            else
            {
                printstudentdata(s,c);
            }
        }
        else
        {
            break;
        }
    }
}