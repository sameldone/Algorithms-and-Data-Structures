/**********************************************************************************************************
 * bubble_sort.c
 * sorts data by comparing adjacent pairs of elements in the array with each other.
 * main()-prints a sorted array of the data.
 * return-Always 0
 * **********************************************************************************************************/

#include <stdio.h>

int main()
{
	int i,j;
	int tmp=0;

	int a[10]={12,14,465,43,67,4,67,2,4,10};

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[j]>a[i])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}

	return(0);
}

