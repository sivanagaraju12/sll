#include"sll_function.h"
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};
void insertion_at_end(struct node **head)
{
struct node *temp =(struct node*)malloc(sizeof(struct node*));
int value;
printf("Enter value:");
scanf("%d",&value);
temp->data=value;
temp->link=NULL;
struct node *p=*head;
if(p==NULL)
*head=temp;
else
{
while(p->link!=NULL)
{
p=p->link;
}
p->link=temp;
}
printf("value is inserted successfully! \n");
}

