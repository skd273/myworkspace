#include<stdio.h>
#include<stdlib.h>

struct node{

    
    int data ;
    struct node* next;
}node;
struct node* head;
void insert(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL)
    temp->next=head;
    head=temp;
}
void print()
{
struct node* temp=head;
printf("List is:");
while(temp!=NULL)
{
    printf("%d",temp->data);
    temp=temp->next;
}
printf("\n");
}
int main()
{
    head=NULL;
    printf("how many numbers\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   printf("Enter the no.\n");
        scanf("%d",&x);
        insert(x);
        print();
    }
}
