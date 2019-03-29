#include<stdio.h>
#include<string.h>
#define max 1000
int i=0;
int palindrome(char *s,int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else if(s[i]==s[n-1])
    {
        i++;
        return palindrome(s,n-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char s[max];
    printf("Enter the string\n");
    scanf("%s",s);
    int n=strlen(s);
    if(palindrome(s,n))
    {
        printf("The string is a Palindrome\n");
    }
    else
    {
        printf("The string is NOT a Palindrome\n");
    }
}