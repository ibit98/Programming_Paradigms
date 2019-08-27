#include<stdio.h>
#define max 1000
int i=0;
int strcmp(char *s1,char *s2)
{
    if(s1[i]=='\0'&&s2[i]=='\0')
    {
        return 0;
    }
    else if(s1[i]<s2[i])
    {
        return -1;
    }
    else if(s1[i]>s2[i])
    {
        return 1;
    }
    else
    {
        i++;
        return strcmp(s1,s2);
    }
}
int main()
{
    char s1[max],s2[max];
    printf("Enter the first string\n");
    scanf("%s",s1);
    printf("Enter the second string\n");
    scanf("%s",s2);
    printf("String compare result %d\n",strcmp(s1,s2));
}