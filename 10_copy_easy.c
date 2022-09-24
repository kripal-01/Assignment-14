//10. Write a program in C to copy the elements of one array into another array.Take array
//values from the user.

#include<stdio.h>
int main()
{
	int i,a[10]={1,2,3,4,5};
	int b[9];
	for(i=0;i<9;i++)
	{
	b[i]=a[i];
	printf("%d ",b[i]);
	}
		return 0;
}
