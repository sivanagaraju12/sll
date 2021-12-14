#include"sll_function.h"
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};
void search(struct node **head)
{
int target;
printf("Enter Target value:");
scanf("%d",&target);
int flag=-1;
struct node *p=*head;
while(p!=NULL)
{
if(p->data==target)
{
flag=1;
break;
}
p=p->link;
}
if(flag==-1)
{
printf("Element is not Found!\n");
}
else
{
printf("Element is Found!");
}
}

