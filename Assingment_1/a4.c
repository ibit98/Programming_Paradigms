#include<stdio.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
int large(int *a,int n)
{
    if(n==1)
    {
        return a[n-1];
    }
    else
    {
        return max(a[n-1],large(a,n-1));
    }
}
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The largest integer is %d\n",large(a,n));
}