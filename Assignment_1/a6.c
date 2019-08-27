#include<stdio.h>
int find(int *a,int n,int x)
{
    if(n==0)
    {
        return 0;
    }
    if(a[n-1]==x)
    {
        return 1;
    }
    else
    {
        return find(a,n-1,x);
    }
}
int main()
{
    int n,num;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to find\n");
    scanf("%d",&num);
    if(find(a,n,num))
    {
        printf("The element is found\n");
    }
    else
    {
        printf("The element is NOT found\n");
    }    
}