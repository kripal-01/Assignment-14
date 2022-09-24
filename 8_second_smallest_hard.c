//8. Write a program to find the second smallest number in an array.Take array values
//from the user

//#include<stdio.h>
//int main()
//{
//	int a[1000],n,i,j,temp=0;
//	printf("enter n  ");
//	scanf("%d",&n);
//	printf("enter nos.  ");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//		for(i=0;i<2;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(a[i]>a[j]){
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	printf("second smallest element is %d",a[1]);
//	
//}

//above is order of n square
#include<stdio.h>
int main()
{
	int a[1000],n,i,j,temp=0,smallest=0,second_smallest=0;
	printf("enter n  ");
	scanf("%d",&n);
	printf("enter nos.  ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=1;i<n;i++)
	{
		smallest=a[0];
		second_smallest=a[1];
		if(smallest>a[i])
		{
			int k=smallest;
			smallest=a[i];
			second_smallest=k;

		}
	
			

		
		
			}	
	printf("second smallest element is %d",second_smallest);
	return 0;
}
