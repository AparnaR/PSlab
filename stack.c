
/*  Program to implement stack with array
    Input :Array of elements
    Output:Array of elements after pop and push operation
    Date : 16/10/2012
 */

#include <stdio.h>
#include<ctype.h>

int stack[100];
int top=-1;   
int limit;
void push(int);
void pop();
void display();
int num,choice,num1,i;


void main() {

    printf("Enter the limit:");
    scanf("%d",&limit);

    printf(" 1.Push\n 2.Pop\n 3.Display\n 4.exit \n ");

    do {

        printf("Enter the choice:");
        scanf("%d",&choice);

        switch(choice)  {

            case 1:

                printf(" Enter the data ");
                scanf("%d",&num);
                push(num);
                break;

            case 2: 
                
                pop();
                break;

            case 3:
                display();
                break;

            default: 
                printf("Quit\n");
                break;

        }                         

    } while(choice!=4);        

}               


void push(int num) {

    if(top==limit-1)  {

        printf("STACK FULL\n");
        return;
    }

    else  {

        top++;
        stack[top]=num;

    }
}

void pop() {

    int num2 ;
    if(top==-1) {
        printf("STACK EMPTY\n");
    }

    else {

        num2=stack[top];
        top--;
        printf("Popped element is %d\n ",num2);
    }
    

}
void display() {

    if(top==-1) {

        printf("STACK EMPTY\n");
    }

    else {

        for(i=top;i>=0;i--) {

            printf("%d\n",stack[i]);

        }
    }

}
