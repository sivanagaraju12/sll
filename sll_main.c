#include<stdio.h>
#include<stdlib.h>
#include "sll_function.h"
struct node
{
int data;
struct node* link;
};
int main()
{
struct node* head=NULL;
printf("singly linked list implementation! \n");
while(1)
{
int option;
printf("chooseoperation:\n1)Insertionatend\n2)Insertionatspecifiedposition\n3)Deletion\n4)searching\n5)printthelist\n6)Exit\nEoption:"); 
scanf("%d",&option);
if(option==1)
insertion_at_end(&head);
else if(option==2)
//printf("Insertion at specified position!\n");
insertion_at_specified_position(&head);
else if(option==3)
//printf("Deletion of the data \n");
deletion(&head);
else if(option==4)
//printf("searching the data \n");
search(&head);
else if(option==5)
print_list(&head);
else
break;
}
return 0;
}


