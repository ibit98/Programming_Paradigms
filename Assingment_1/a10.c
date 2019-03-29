#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void sort(int a[],int n)
{
    if(n==1)
    {
        return ;
    }
    else
    {
        int t=0,i;
        for(i=0;i<n;i++)
        {
            if(a[t]<a[i])
            {
                t=i;
            }
        }
        swap(&a[t],&a[n-1]);
        sort(a,n-1);
        return ;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("The elements are sorted in ascending order\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}