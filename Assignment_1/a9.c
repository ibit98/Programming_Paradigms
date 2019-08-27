#include<stdio.h>
#define max 1000
int i=0;
void replace(char *s,char c1,char c2)
{
    if(s[i]=='\0')
    {
        return ;
    }
    else
    {
        if(s[i]==c1)
        {
            s[i]=c2;
        }
        i++;
        replace(s,c1,c2);
    }
}
int main()
{
    char c1,c2,s[max];
    printf("Enter the string\n");
    scanf("%s",s);
    getchar();
    printf("Enter the character to be replaced\n");
    scanf("%c",&c1);
    getchar();
    printf("Enter the character for replace\n");
    scanf("%c",&c2);
    replace(s,c1,c2);
    printf("The new string is\n");
    printf("%s\n",s);
}