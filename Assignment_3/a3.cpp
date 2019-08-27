//
// Created by INDRANIL on 29-01-2019.
//
#include<iostream>
#include "myclass.h"
#define max 100
using namespace std;
struct stu
{
    int data;
};
int datatype(string s)
{
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            if(n>5)
            {
                return 4;
            }
            else
            {
                return 3;
            }
        }
    }
    if(n<3)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
int main() {
    int x1, r;
    do {
        //cout << "Choose \n1.int\n2.short\n3.float\n4.double\n5.struct\n6.Exit\n";
        cout<< "Enter a sample data\n";
        string s;
        cin >> s;
        switch (datatype(s)) {
            case 1: {
                static int i = 0;
                int a, i1, x, n,*l;
                stack<int> *s1[max];
                do {
                    cout<< "1.Create\n2.Push\n3.Pop\n4.Get Max Size\n5.Current Size\n6.Empty or not\n7.Display\n8.Copy Stack\n9.Update\n10.Exit\n";
                    cin >> a;
                    switch (a) {
                        case 1: {
                            cout << "Enter size of the stack\n";
                            cin >> x;
                            stack<int> s(x);
                            s1[i++] = &s;
                            break;
                        }
                        case 2: {
                            cout << "Enter the Stack no.\n";
                            cin >> i1;
                            cout << "Enter the element\n";
                            cin >> n;
                            s1[i1 - 1]->push(n) ? cout << n << " is pushed\n" : cout << "Cant push.Stack overflowed\n";
                            break;
                        }
                        case 3: {
                            cout << "Enter the Stack no.\n";
                            cin >> i1;
                            s1[i1 - 1]->pop(n) ? cout << n << " is popt out\n" : cout << "Cant pop.Stack underflow\n";
                            break;
                        }
                        case 4: {
                            cout << "Enter the Stack no.\n";
                            cin >> i1;
                            cout << "Max size of the stack is " << s1[i1 - 1]->maxsize() << endl;
                            break;
                        }
                        case 5: {
                            cout << "Enter the Stack no.\n";
                            cin >> i1;
                            cout << "Current size of the stack is " << s1[i1 - 1]->currentsize() << endl;
                            break;
                        }
                        case 6: {
                            cout << "Enter the Stack no.\n";
                            cin >> i1;
                            cout << (s1[i1 - 1]->isempty() ? "Stack is empty\n" : "Stack is Not empty\n");
                            break;
                        }
                        case 7: {
                            cout << "Enter the Stack no.\n";
                            cin >> i1;
                            l = s1[i1 - 1]->display();
                            for (int j = s1[i1 - 1]->currentsize() - 1; j >= 0; j--) {
                                cout << l[j] << endl;
                            }
                            break;
                        }
                        case 8: {
                            cout << "Enter the Stack no.\n";
                            cin >> i1;
                            stack<int> temp(*s1[i1 - 1]);
                            s1[i++] = &temp;
                            break;
                        }
                        case 9: {
                            cout << "Enter the first  Stack no.\n";
                            cin >> x;
                            cout << "Enter the second Stack no.\n";
                            cin >> n;
                            *s1[n - 1] = *s1[x - 1];
                            break;
                        }
                        default:break;
                    }
                } while (a != 10);
            }
                case 2: {
                    static int i = 0;
                    int a, i1, x;
                    short n, *l;
                    stack<short> *s1[max];
                    do {
                        cout
                                << "1.Create\n2.Push\n3.Pop\n4.Get Max Size\n5.Current Size\n6.Empty or not\n7.Display\n8.Copy Stack\n9.Update\n10.Exit\n";
                        cin >> a;
                        switch (a) {
                            case 1: {
                                cout << "Enter size of the stack\n";
                                cin >> x;
                                stack<short> s(x);
                                s1[i++] = &s;
                                break;
                            }
                            case 2: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Enter the element\n";
                                cin >> n;
                                s1[i1 - 1]->push(n) ? cout << n << " is pushed\n" : cout
                                        << "Cant push.Stack overflowed\n";
                                break;
                            }
                            case 3: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                s1[i1 - 1]->pop(n) ? cout << n << " is popt out\n" : cout
                                        << "Cant pop.Stack underflow\n";
                                break;
                            }
                            case 4: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Max size of the stack is " << s1[i1 - 1]->maxsize() << endl;
                                break;
                            }
                            case 5: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Current size of the stack is " << s1[i1 - 1]->currentsize() << endl;
                                break;
                            }
                            case 6: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << (s1[i1 - 1]->isempty() ? "Stack is empty\n" : "Stack is Not empty\n");
                                break;
                            }
                            case 7: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                l = s1[i1 - 1]->display();
                                for (int j = s1[i1 - 1]->currentsize() - 1; j >= 0; j--) {
                                    cout << l[j] << endl;
                                }
                                break;
                            }
                            case 8: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                stack<short> temp(*s1[i1 - 1]);
                                s1[i++] = &temp;
                                break;
                            }
                            case 9: {
                                int i2;
                                cout << "Enter the first  Stack no.\n";
                                cin >> x;
                                cout << "Enter the second Stack no.\n";
                                cin >> i2;
                                *s1[i2 - 1] = *s1[x - 1];
                                break;
                            }
                            default:
                                break;
                        }
                    } while (a != 10);
                }
                case 3: {
                    static int i = 0;
                    int a, i1, x, i2;
                    float n,*l;
                    stack<float> *s1[max];
                    do {
                        cout
                                << "1.Create\n2.Push\n3.Pop\n4.Get Max Size\n5.Current Size\n6.Empty or not\n7.Display\n8.Copy Stack\n9.Update\n10.Exit\n";
                        cin >> a;
                        switch (a) {
                            case 1: {
                                cout << "Enter size of the stack\n";
                                cin >> x;
                                stack<float> s(x);
                                s1[i++] = &s;
                                break;
                            }
                            case 2: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Enter the element\n";
                                cin >> n;
                                s1[i1 - 1]->push(n) ? cout << n << " is pushed\n" : cout
                                        << "Cant push.Stack overflowed\n";
                                break;
                            }
                            case 3: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                s1[i1 - 1]->pop(n) ? cout << n << " is popt out\n" : cout
                                        << "Cant pop.Stack underflow\n";
                                break;
                            }
                            case 4: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Max size of the stack is " << s1[i1 - 1]->maxsize() << endl;
                                break;
                            }
                            case 5: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Current size of the stack is " << s1[i1 - 1]->currentsize() << endl;
                                break;
                            }
                            case 6: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << (s1[i1 - 1]->isempty() ? "Stack is empty\n" : "Stack is Not empty\n");
                                break;
                            }
                            case 7: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                l = s1[i1 - 1]->display();
                                for (int j = s1[i1 - 1]->currentsize() - 1; j >= 0; j--) {
                                    cout << l[j] << endl;
                                }
                                break;
                            }
                            case 8: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                stack<float> temp(*s1[i1 - 1]);
                                s1[i++] = &temp;
                                break;
                            }
                            case 9: {
                                cout << "Enter the first  Stack no.\n";
                                cin >> x;
                                cout << "Enter the second Stack no.\n";
                                cin >> i2;
                                *s1[i2 - 1] = *s1[x - 1];
                                break;
                            }
                            default:
                                break;
                        }
                    } while (a != 10);
                }
                case 4: {
                    static int i = 0;
                    int a, i1, x, i2;
                    double n,*l;
                    stack<double> *s1[max];
                    do {
                        cout
                                << "1.Create\n2.Push\n3.Pop\n4.Get Max Size\n5.Current Size\n6.Empty or not\n7.Display\n8.Copy Stack\n9.Update\n10.Exit\n";
                        cin >> a;
                        switch (a) {
                            case 1: {
                                cout << "Enter size of the stack\n";
                                cin >> x;
                                stack<double> s(x);
                                s1[i++] = &s;
                                break;
                            }
                            case 2: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Enter the element\n";
                                cin >> n;
                                s1[i1 - 1]->push(n) ? cout << n << " is pushed\n" : cout
                                        << "Cant push.Stack overflowed\n";
                                break;
                            }
                            case 3: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                s1[i1 - 1]->pop(n) ? cout << n << " is popt out\n" : cout<< "Cant pop.Stack underflow\n";
                                break;
                            }
                            case 4: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Max size of the stack is " << s1[i1 - 1]->maxsize() << endl;
                                break;
                            }
                            case 5: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Current size of the stack is " << s1[i1 - 1]->currentsize() << endl;
                                break;
                            }
                            case 6: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << (s1[i1 - 1]->isempty() ? "Stack is empty\n" : "Stack is Not empty\n");
                                break;
                            }
                            case 7: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                l = s1[i1 - 1]->display();
                                for (int j = s1[i1 - 1]->currentsize() - 1; j >= 0; j--) {
                                    cout << l[j] << endl;
                                }
                                break;
                            }
                            case 8: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                stack<double> temp(*s1[i1 - 1]);
                                s1[i++] = &temp;
                                break;
                            }
                            case 9: {
                                cout << "Enter the first  Stack no.\n";
                                cin >> x;
                                cout << "Enter the second Stack no.\n";
                                cin >> i2;
                                *s1[i2 - 1] = *s1[x - 1];
                                break;
                            }
                            default:
                                break;
                        }
                    } while (a != 10);
                }
                case 5: {
                    static int i = 0;
                    int a, i1, x, i2;
                    stu n, *l;
                    stack<stu> *s1[max];
                    do {
                        cout<< "1.Create\n2.Push\n3.Pop\n4.Get Max Size\n5.Current Size\n6.Empty or not\n7.Display\n8.Copy Stack\n9.Update\n10.Exit\n";
                        cin >> a;
                        switch (a) {
                            case 1: {
                                cout << "Enter size of the stack\n";
                                cin >> x;
                                stack<stu> s(x);
                                s1[i++] = &s;
                                break;
                            }
                            case 2: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Enter the element\n";
                                cin >> n.data;
                                s1[i1 - 1]->push(n) ? cout << n.data << " is pushed\n" : cout<< "Cant push.Stack overflowed\n";
                                break;
                            }
                            case 3: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                s1[i1 - 1]->pop(n) ? cout << n.data << " is popt out\n" : cout
                                        << "Cant pop.Stack underflow\n";
                                break;
                            }
                            case 4: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Max size of the stack is " << s1[i1 - 1]->maxsize() << endl;
                                break;
                            }
                            case 5: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << "Current size of the stack is " << s1[i1 - 1]->currentsize() << endl;
                                break;
                            }
                            case 6: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                cout << (s1[i1 - 1]->isempty() ? "Stack is empty\n" : "Stack is Not empty\n");
                                break;
                            }
                            case 7: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                l = s1[i1 - 1]->display();
                                for (int j = s1[i1 - 1]->currentsize() - 1; j >= 0; j--) {
                                    cout << l[j].data << endl;
                                }
                                break;
                            }
                            case 8: {
                                cout << "Enter the Stack no.\n";
                                cin >> i1;
                                stack<stu> temp(*s1[i1 - 1]);
                                s1[i++] = &temp;
                                break;
                            }
                            case 9: {
                                cout << "Enter the first  Stack no.\n";
                                cin >> x;
                                cout << "Enter the second Stack no.\n";
                                cin >> i2;
                                *s1[i2 - 1] = *s1[x - 1];
                                break;
                            }
                            default:
                                break;
                        }
                    } while (a != 10);
                }
                exit(0);
            }
        }while (r != 6);
    }