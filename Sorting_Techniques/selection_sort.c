#include <stdio.h>

int least(int[],int,int);

int main()
{
	int i,pstn,tmp;
	int a[]={1,5,3,7,8,2,9,6,0,4};

	for(i=0;i<10;i++)
	{
		pstn=least(a,10,i);
		tmp=a[i];
		a[i]=a[pstn];
		a[pstn]=tmp;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	return(0);
}

int least(int a[],int num,int i)
{
	int small,pstn,j;

	small=a[i];

	pstn=i;

	for(j=i+1;j<10;j++)
	{
		if(a[j]<small)
		{
			small=a[j];
			pstn=j;
		}
	}
	return(pstn);
}
