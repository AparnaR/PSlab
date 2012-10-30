
/*  Program to implement queue
    Input :Limit
    Output:Elements in queue
    Date :16/10/2012
 */

#include<stdio.h>
int insert(int);
int delete();
void display();
int num,ch,num1,i;

int queue[500];
int front=-1;
int rear=-1;
int limit;

void main() {
    
    printf("Enter the limit:");
    scanf("%d",&limit);

        printf("** MAIN MENU**\n 1.Add\n 2.Delete\n 3.Display\n 4.Exit \n ");
     do {

         printf("Enter the choice:");
         scanf("%d",&ch);

        switch(ch)  {

            case 1:
                printf(" Enter the element:");
                scanf("%d",&num);
                insert(num);
                break;

            case 2: 
                num1=delete();
                printf("Deleted element is  %d ",num1);
                break;

            case 3:
                display();
                break;

            default: 
                printf("Invalid Choice\n");
                break;

        }                          

    } while(ch!=4);        

}               

int insert(int num) {

    if(rear>=limit-1)  {

        printf("QUEUE OVERFLOW\n");
        return;
    }

    else  {

        if (front==-1) {
            front=0;
        rear++;
        queue[rear]=num;

       }
    }
}

int delete() {

    int num2 ;

    if(front==-1||front>rear) {

        printf("QUEUE EMPTY \n");
        return 0;
    }

    else {

        num2=queue[front];
        front++;
    }

    if(front>rear) {

        front=rear=-1;

    }

    return(num2);

}

void display() {

    if(front>rear) {

        printf("QUEUE UNDERFLOW \n ");

    }

    else {

        for(i=front;i<=rear;i++) {
            printf("%d\n",queue[i]);

        }

    }
}

