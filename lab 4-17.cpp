#include<stdio.h>
int main()
{
	int n;
	int d=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++){
		
		printf(" %d ",d);
		
		
		d++;}
		printf("\n");
	}
	return(0);
}
