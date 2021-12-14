#include"sll_function.h"
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};
void deletion(struct node **head)
{
int target;
printf("Enter target value:");
scanf("%d",&target);
struct node  *p=*head;
struct node *q=NULL;
while(p!=NULL)
{
if(p->data==target)
break;
q=p;
p=p->link;
}
if(p==NULL)
printf("Target value is already not present!\n");
else if(q==NULL)
*head=p->link;
else
{
q->link=p->link;
p->link=NULL;
free(p);
printf("value is Deleted Successfully!\n");
}
}

