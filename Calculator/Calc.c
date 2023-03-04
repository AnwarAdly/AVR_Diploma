#include <stdio.h>
#define MAXSIZE 5
struct stack{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

float push();
int  pop(void);
void display(void);

void main (void)
{
    int choice;
    int option = 1;
    s.top = -1;

    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");

        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }
}
float push ()
{
    char Operator;
	float num1, num2, result = 0, i;
    if (s.top == (MAXSIZE - 1))
        printf ("Stack is Full\n");
    else{ Operator = (float) i;
        printf("Please Enter an Operator (+, -, *, /)  :  ");
        scanf("%f",&Operator);
        printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
        scanf("%f%f",&num1,&num2);
        switch(Operator)
        {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                printf("\n You have enetered an Invalid Operator \n ");
        }

        printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);
        s.top = s.top++;
        s.stk[s.top] = result;
    }
    return result;
}
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("poped element is = %dn", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}
