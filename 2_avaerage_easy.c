// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("-------------------------------------------------\n");
    printf("enter 10 values ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("-------------------------------------------------\n");
    printf("-------------------------------------------------\n\n");
    printf("average is %.2f\n",sum/10.0);
    
    /* code */
    return 0;
}

