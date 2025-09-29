#include<stdio.h>
#define n
int stack[n];
int top=-1;
void push()
{
    int x;
    if (top==n-1){
        printf("STACKOVERFLOW \n");
    }else
    {
        printf("enter data:");
        scanf("%d", &x);
        stack[++top]=x;
        printf("%d pushed onto the stack \n");
    }
}

void pop()
{
    if (top==-1){
        printf("STACKUNDERFLOW");
    }else
    {
        printf("\n pop from the stack= %d", stack[top]);
        top--;
    }
}

void peek ()
{
    if (top==-1)
    {
        printf("stack is empty! \n");
    }else
    {
        printf("top element is %d \n", stack[top]);
    }
}

void display ()
{
    if (top==-1)
    {
        printf("stack is empty\n");
    }else
    {
        printf("stack elements are: \n");
        for (int i= top; i>=0;i--){
            printf("%d\n, stack[i]");
        }
    }
}


int main()
{
    int choice;
    while (1){
        printf ("\n stack");
        printf ("1.push \n");
        printf ("2.pop \n");
        printf ("3.peek \n");
        printf ("4.exit\n");
        printf ("5.display\n");
        printf ("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            printf("exiting the code bye bye\n");
            return 0;
        case 5:
            display();
            break;
        default:
            printf ("invalid choice!!!\n");
            break;
        }
    }
    return 0;
}
