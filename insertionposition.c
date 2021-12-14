#include"sll_function.h"
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};
void insertion_at_specified_position(struct node **head)
{
int position,value;
printf("Enter position and value:");
scanf("%d %d",&position,&value);
int cnt=1;
struct node *p=*head;
while(p!=NULL)
{
if(cnt==position)
break;
p=p->link;
cnt++;
}
if(p==NULL)
{
printf("Invalid position");
}
else
{
struct node *temp=(struct node*)malloc(sizeof(struct node*));
temp->data=value;
temp->link=p->link;
p->link=temp;
printf("value is inserted at specified position \n");
}
}

