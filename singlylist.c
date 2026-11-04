#include<stdio.h>
#include<stdlib.h>
struct node
{
int  data;
struct node*next;
};
struct node*top=NULL;
void push()
{
struct node*newnode;
int value;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("memory allocation failed\n");
return;
}
printf("enter value:");
scanf("%d",&value);
newnode->data=value;
newnode->next=top;
top=newnode;
printf("node inserted successfully \n");
}
void pop()
{
struct node *tmp;
if(top==NULL)
{
printf("list is empty\n");
return;
}
tmp=top;
top=top->next;
printf("deleted element:%d\n",tmp->data);
free(tmp);
}
void search()
{
struct node*tmp;
int value,found=0;
printf("enter element to search");
scanf("%d",&value);
tmp=top;
while(tmp!=NULL)
{
if(tmp->data==value)
{
found=1;
break;
}
tmp=tmp->next;
{
if(found==1)
printf("element found\n");
else
printf("element not found\n");
}
void display()
{
struct node*tmp;
if(top==NULL)
{
printf("stack is empty\n");
}
else
{
tmp=top;
printf("stack elements are:\n");
while(tmp!=NULL)
{
printf("%d\n",tmp->data);
tmp=tmp->next;
}
}
}
int main()
{
int choice;
while(1)
{
printf("\n1.push\n");
printf("\n2.pop\n");
printf("\n3.search\n");
printf("\n4.display\n");
printf("\n5.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:search();
break;
case 4:display();
break;
case 5:exit(0);
default:
printf("invalid choice\n");
}
}
return 0;
}
