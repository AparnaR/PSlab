
/* write a program to implement insertion sort
   Input :Limit and array
   Output:Sorted array
   Date :16/10/2012
 */

#include<stdio.h>

void main() {

    int limit,input[200],i,j,temp;

    printf("Enter the limit:\n");
    scanf("%d",&limit);

    printf("Enter the elements :\n");
    for(i=0;i<limit;i++) {

        scanf("%d",&input[i]);

    }

    for (i=1;i<limit;i++)  {

        temp = input[i];
        j = i-1;

        while ((j>= 0) && (input[j]) > temp) {

            input[j+1] = input[j];

            j--;
        }

        input[j+1] = temp;
    }

    printf("The elements in sorted order are :\n");

    for(i=0;i<limit;i++) {

        printf("%d\n",input[i]);
    
    }

}
