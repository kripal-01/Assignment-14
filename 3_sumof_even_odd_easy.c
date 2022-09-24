// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],i,se=0,so=0;
    printf("-------------------------------------------------\n");
    printf("enter 10 values ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
       if(arr[i]%2==0)
       se+=arr[i];
       else
       so+=arr[i];
    }
    printf("-------------------------------------------------\n");
    printf("-------------------------------------------------\n\n");
    printf("\nsum of even no. is  %d",se);
     printf("\nsum of odd no. is  %d",so);
   
    /* code */
    return 0;
}
