//
// Created by INDRANIL on 30-01-2019.
//
#include <iostream>
#ifndef ASSINGMENT_3_MYCLASS_H
#define ASSINGMENT_3_MYCLASS_H
#define max 100
template<typename T>
class stack
{
private:
    int count;
    int size;
    T *data;
public:
    stack(){ count=0,size=max,data=new T[size];}
    stack(int n=max){ count=0,size=n,data=new T[size];}
    stack(stack &s)
    {
        count=s.count;
        size=s.size;
        data=s.data;
    }
    int push(T x)
    {
        if(count==size)
        {
            return 0;
        }
        else
        {
            data[count++]=x;;
            return 1;
        }
    }
    int pop(T &x)
    {
        if(count==0)
        {
            return 0;
        }
        else
        {
            x=data[--count];
            return 1;
        }
    }
    inline int maxsize()
    {
        return size;
    }
    inline int currentsize()
    {
        return count;
    }
    inline int isempty()
    {
        if(count==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    T *display()
    {
        return data;
    }
    stack operator + (stack x)
    {
        T a;
        stack temp(this->size+x.size);
        temp.count=this->count+x.count;
        while(!isempty())
        {
            pop(a);
            temp.push(a);
        }
        while(!x.isempty())
        {
            x.pop(a);
            temp.push(a);
        }
        return temp;
    }
    ~stack()
    {
        delete data;
    }
};
class node
{
    int exp;
    int coeff;
    node *next;
public:
    node(int e=0,int c=0)
    {
        exp=e;
        coeff=c;
        next=NULL;
    }
    int getexp()
    {
        return exp;
    }
    int getco()
    {
        return this->coeff;
    }
    node *getnx()
    {
        return this->next;
    }
    void putnx(node *nx)
    {
        next=nx;
    }
    ~node()
    {
        delete next;
    }
};
class poly
{
    node *head;
public:
    poly(node *n=NULL)
    {
        head=n;
    }
    void addnode(int ex,int co)
    {
        node temp(ex,co);
        node *loc,*loc2;
        if(this->head==NULL)
        {
            this->head=&temp;
        }
        else if(this->head->getexp()<ex)
        {
            temp.putnx(this->head);
            this->head=&temp;
        }
        else
        {
            loc=head;
            loc2=head;
            while(loc||loc->getexp()>ex)
            {
                loc2=loc;
                loc=loc->getnx();
            }
            temp.putnx(loc2->getnx());
            loc2->putnx(&temp);
        }
    }
    node *gethead()
    {
        return head;
    }
    poly operator + (poly x)
    {
        poly temp(NULL);
        node *loc1,*loc2,*loc3;
        loc1=head,loc2=x.gethead(),loc3=temp.head;
        while(loc1->getnx()&&loc2->getnx())
        {
            if(loc1->getexp()==loc2->getexp())
            {
                node t(loc1->getexp(),loc1->getco()+loc2->getco());
                if(temp.head==NULL)
                {
                    head=&t;
                    loc3=&t;
                }
                else
                {
                    loc3->putnx(&t);
                    loc3=&t;
                }
                loc1=loc1->getnx();
                loc2=loc2->getnx();
            }
            else if(loc1->getexp()>loc2->getexp())
            {
                node t(loc1->getexp(),loc1->getco());
                if(temp.head==NULL)
                {
                    head=&t;
                    loc3=&t;
                }
                else
                {
                    loc3->putnx(&t);
                    loc3=&t;
                }
                loc1=loc1->getnx();
            }
            else
            {
                node t(loc2->getexp(),loc2->getco());
                if(temp.head==NULL)
                {
                    head=&t;
                    loc3=&t;
                }
                else
                {
                    loc3->putnx(&t);
                    loc3=&t;
                }
                loc2=loc2->getnx();
            }
        }
        while(loc1)
        {
            node t(loc1->getexp(),loc1->getco());
            if(temp.head==NULL)
            {
                head=&t;
                loc3=&t;
            }
            else
            {
                loc3->putnx(&t);
                loc3=&t;
            }
            loc1=loc1->getnx();
        }
        while(loc2)
        {
            node t(loc2->getexp(),loc2->getco());
            if(temp.head==NULL)
            {
                head=&t;
                loc3=&t;
            }
            else
            {
                loc3->putnx(&t);
                loc3=&t;
            }
            loc2=loc2->getnx();
        }
        return temp;
    }
    ~poly()
    {
        delete head;
    }
};
class matrix
{
    int row;
    int coloum;
    int **data;
public:
    matrix(int r=10,int c=10)
    {
        row=r;
        coloum=c;
        data=new int*[r];
        for(int i=0;i<r;i++)
        {
            data[i]=new int[c];
        }
    }
    matrix(matrix &t)
    {
        this->row=t.row;
        this->coloum=t.coloum;
        this->data=t.data;
    }
    void getdata(int **a)
    {
        data=a;
    }
    int **putdata()
    {
        return this->data;
    }
    int putr()
    {
        return this->row;
    }
    int putc()
    {
        return this->coloum;
    }
    matrix operator +(matrix a)
    {
        if(this->row==a.row&&this->coloum==a.coloum)
        {
            matrix c(this->row,this->coloum);
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<coloum;j++)
                {
                    c.data[i][j]=data[i][j]+a.data[i][j];
                }
            }
            return c;
        }
    }
    matrix operator * (matrix a)
    {
        if(coloum==a.row)
        {
            int s;
            matrix t(row,a.coloum);
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<a.coloum;j++)
                {
                    s=0;
                    for(int k=0;k<a.row;k++)
                    {
                        s+=data[i][k]*a.data[k][j];
                    }
                    t.data[i][j]=s;
                }
            }
            return t;
        }
    }

    int operator ==(matrix a)
    {
        if(row==a.row&&coloum==a.coloum)
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<coloum;j++)
                {
                    if(data[i][j]!=a.data[i][j])
                    {
                        return 0;
                    }
                }
            }
            return 1;
        }
        return 0;
    }
    matrix tranpose ()
    {
        matrix c(this->coloum,this->row);
        for(int i=0;i<this->coloum;i++)
        {
            for(int j=0;j<row;j++)
            {
                c.data[i][j]=data[j][i];
            }
        }
        return c;
    }
    matrix sub(int x,int y,int r,int c)
    {
        matrix t(r,c);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                t.data[i][j]=data[i+x-1][j+y-1];
            }
        }
        return t;
    }
    void getcofactor(int **mat, int **temp, int p, int q, int n)
    {
        int i = 0, j = 0;
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if (row != p && col != q) {
                    temp[i][j++] = mat[row][col];
                    if (j == n - 1) {
                        j = 0;
                        i++;
                    }
                }
            }
        }
    }
    int det(int **d,int n)
    {
        if(row==coloum)
        {
            if(this->row==1&&this->coloum==1)
            {
                return data[0][0];
            }
            int c=0,sign=1;
            matrix temp(this->row,this->coloum);
            for (int f = 0; f < this->coloum; f++)
            {
                getcofactor(this->data, temp.data, 0, f, this->coloum);
                c += sign * this->data[0][f] * det(temp.data, n-1);
                sign = -sign;
            }
            return c;
        }
        return 0;
    }
    ~matrix()
    {
        delete data;
    }
};
#endif //ASSINGMENT_3_MYCLASS_H
