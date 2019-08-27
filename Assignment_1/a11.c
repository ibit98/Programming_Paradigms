#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int key;
    struct node *next;
}node;
void print_list(node *start)
{
    node *loc;
    loc=start;
    printf("Nodes are in sorted order\n");
    while(loc)
    {
        printf("%d ",loc->key);
        loc=loc->next;
    }
    printf("\n");
}
node *add_node(node *start)
{
    node *a=(node *)malloc(sizeof(node));
    printf("Enter the key of the new node\n");
    scanf("%d",&a->key);
    node *loc;
    loc=start;
    if(loc)
    {
        while(loc->next)
        {
            loc=loc->next;
        }
        loc->next=a;
        a->next=NULL;
    }
    else
    {
        start=a;
        a->next=NULL;
    }
    return start;
}
node *sortLL(node *start,int n)
{
    int m;
    if(n==1)
    {
        return start;
    }
    m=n;
    node *loc,*loc2,*loc3;
    loc=start;
    loc2=start;
    loc3=start;
    while(m--)
    {
        if(loc->key<loc2->key)
        {
        	if(start->next==loc)
            {
            	start=loc;
			}
			else
			{
				loc3->next=loc;
			}
			loc2->next=loc->next;
			loc->next=loc2;
			loc3=loc;
			loc=loc2->next;
        }
        else
        {
            loc3=loc2;
            loc2=loc;
            loc=loc->next;
        }
    }
    return sortLL(start,n-1);
}
int main()
{
    int a,c=0;
    node *list;
    list=NULL;
    while(1)
    {
        printf("Enter '1' to add new node\n");
        printf("Enter '2' to sort all nodes\n");
        scanf("%d",&a);
        if(a==1)
        {
            list=add_node(list);
            c++;
        }
        else
        {
            list=sortLL(list,c);
            print_list(list);
            break;
        }
    }
}