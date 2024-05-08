/**********************************************************************************************************
 * insertion_sort.c
 * main()-prints an inserted list of numbers 
 * 
 * return-Always 0
 * **********************************************************************************************************/

#include <stdio.h>

int main()
{
	int i,j,k,tmp;

	int a[10]={13,5,6,2,90,64,54,11,7,1};

	for(i=1;i<10;i++)
	{
		tmp=a[i];

		j=i-1;

		while(j>0 && tmp<=a[j])
		{
			a[j+1] = a[j];

			j = j-1;
		}
		a[j+1]=tmp;
	}
	for(k=1;k<=9;k++)
	{
		printf("%d\n",a[k]);
	}
	return(0);
}
