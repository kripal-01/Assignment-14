//9. Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user
#include<stdio.h>
int main()
{
	int i;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=9;i>=0;i--)
	printf("%d ",a[i]);
	return 0;
}
