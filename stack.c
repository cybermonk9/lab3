#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int stack[MAX];
void push();
void pop();
void palindrome();
void display();
void main()
{
int ch;
while(1)
{
printf("STACK OPERATION\n");
printf("1 : push\n");
printf("2 : pop\n");
printf("3 : Palindrome\n");
printf("4 : Display\n");
printf("5 : Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: palindrome();
break;
case 4: display();
break;
case 5: exit(0);
break;
default: printf("Invalid choice\n");
}
}
}
void push()
{
int elem;
if(top==MAX-1)
printf("stack overflow\n");
else
{
printf("Enter the elements to be inserted\n");
scanf("%d",&elem);
top++;
stack[top]=elem;
}
}
void pop()
{
if(top==-1)
printf("stack underflow\n");
else
{
printf("\nThe deleted element from the stack is%d\n",stack[top]);
top--;
}
}
void palindrome()
{
int i,count=0;
for(i=0;i<=top/2;i++)
{
if(stack[i]==stack[top-i])
count++;
}
if((top/2+1)==count)
printf("Stack contents are palindrome\n");
else
printf("Stack contents are not palindrome\n");
}
void display()
{
int i;
if(top==-1)
printf("stack underflow\n no elements to display\n");
else
{
printf("The elements of stack are\n");
for(i=0;i<=top;i++)
printf("%d\t",stack[i]);
printf("\n");
}
}

