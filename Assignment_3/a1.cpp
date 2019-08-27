#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int age;
    char dept[10];
    int year;
public:
    void getstudentdata()
    {
        getchar();
        cout<<"Enter the name of the student\n";
        cin.get(name,20,'\n');
        cout<<"Enter the age of the student\n";
        cin>>age;
        getchar();
        cout<<"Enter the depertment of the student\n";
        cin.get(dept,10,'\n');
        cout<<"Enter the year of the student\n";
        cin>>year;
    }
    void printstudentdata()
    {
        cout<<"Name : "<<name<<"\tAge : "<<age<<"\tDept : "<<dept<<"\tYear : "<<year<<endl;
    }
};
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
            cout<<"Press 2 to print student data\n";
            cin>>i;
            if(i==1)
            {
                s[c++].getstudentdata();
            }
            else
            {
                cout<<"Enter no. of the student to print\n";
                cin>>i;
                s[i-1].printstudentdata();
            }
        }
        else
        {
            break;
        }
    }
}