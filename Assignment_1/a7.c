#include<stdio.h>
void reverse(int *a,int n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        printf("%d ",a[n-1]);
        reverse(a,n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements in reverse order are\n");
    reverse(a,n);
    printf("\n");
}