//5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i,g;
    printf("enter 10 elements ");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
    {
        if(a[0]>a[i])
        a[0]=a[i];
    }
    printf("%d",a[0]);
    /* code */
    return 0;
}


