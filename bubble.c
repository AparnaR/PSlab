/* Write a program to implement bubble sorting
   Input :Limit
   Output:Sorted array
   Date  :04/10/2012
 */

#include<stdio.h>

void main() {

    int i,j,limit,temp,input[200];

    printf("Enter the limit:\n");
    scanf("%d",&limit);

    printf("Enter the elements \n");
    for(i=0;i<limit;i++) {
        scanf("%d",&input[i]);

    }

    for(i=0;i<limit;i++) {

        for(j=i+1;j<limit;j++) {

            if(input[i]>input[j]) {

                temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }
        }
    }

    printf("The sorted array is \n");
    for(i=0;i<limit;i++) {

        printf("%d\n",input[i]);

    }
}

