#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value)
{
    if (top == MAX -1)
       {
           printf("stack overflow\n");
        }
else
{
    top ++;
    stack[top]= value;
}
}
void pop()
{
    if (top== -1)
    {
        printf("stack underflow\n");
    }

else {
    top --;
}

}
void display ()
{
    if (top= -1)
    {
        printf("stack is empty");
    }

else {
    for(int i=top; i>=0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
}
int main() {
    pop();
push (5);
push(3);
push(6);
push(8);
push(5);
pop();
display();

}
