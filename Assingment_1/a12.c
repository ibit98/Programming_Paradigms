#include<stdio.h>
#include<stdlib.h>
#define max 1000
int largest(int a[],int i,int n)
{
    if(a[i]==-1)
    {
        return -1;
    }
    else
    {
        int j,pmax=a[i],cmax;
        for(j=1;j<=n;j++)
        {
            cmax=largest(a,n*i+j,n);
            if(pmax<cmax)
            {
                pmax=cmax;
            }
        }
        return pmax;
    }
} 
int main()
{
    int n,i,x,d;
    char c;
    printf("Enter the degree of the tree\n");
    scanf("%d",&n);
    int a[max];
    for(i=0;i<max;i++)
    {
        a[i]=-1;
    }
    getchar();
    while(1)
    {
        printf("Do you want to add node(y/n)\n");
        scanf("%c",&c);
        if(c=='y')
        {
            printf("Enter the level order traversal with serial no. and element\n");
            scanf("%d%d",&d,&x);
            a[d]=x;
            getchar();
        }
        else
        {
            n=largest(a,0,n);
            printf("The largest element is %d\n",n);
            break;
        }
    }
}