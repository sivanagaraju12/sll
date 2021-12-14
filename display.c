#include"sll_function.h"
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};

void print_list(struct node **head)
{
struct node *p = *head;
printf("Elements :\n");
while(p != NULL)
{
printf("%d  \t",p->data);
p=p->link;
}
printf("\n");
}


