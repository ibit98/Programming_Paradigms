#include<stdio.h>
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the integer\n");
    scanf("%d",&n);
    printf("The sum is %d\n",sum(n));
}