#include<stdio.h>
int hcf(int n,int m)
{
    if(n<m)
    {
        int t;
        t=n;
        n=m;
        m=t;
    }
    if(n%m==0)
    {
        return m;
    }
    else
    {
        return hcf(m,n%m);
    }
}
int main()
{
    int n,m;
    printf("Enter first integer\n");
    scanf("%d",&n);
    printf("Enter second integer\n");
    scanf("%d",&m);
    printf("The HCF is %d",hcf(n,m));
}