#include<stdio.h>
void processmethod(int [],int );

int main()
{
	int a[]={10,11,15,20,25};
	int N=sizeof(a)/sizeof(int);
	processmethod(a,N);
	// print all the elements of an array
	int i;
	for(i=0;i<N;i++)
	  printf("%d ",a[i]);
	return 0;
}
void processmethod(int a[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(a[i]%2!=0)
		a[i]=a[i]+1;
	}
}
