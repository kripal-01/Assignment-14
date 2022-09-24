//7. Write a program to find second largest in an array.Take array values from the user
#include<stdio.h>
int main()
{
	int a[1000],n,i,j,temp=0;
	printf("enter n  ");
	scanf("%d",&n);
	printf("enter nos.  ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<2;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("second largest element is %d",a[1]);
	
}
