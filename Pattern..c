#include <stdio.h>

int main() 
{
	int n, i, j, k=1;
	printf("Enter n :");
	scanf("%d",&n);
	//n = 6;
	for(i=0;i<n;i++)
	{
	   if(i%2==0)
	   {
	        for(j=0;j<7;j++)
	            printf("%d",k);
	        k++;
	        printf("%d \n",k);
	   }
	   if(i%2!=0)
	   {
	       k++;
	       printf("%d",k--);
	       for(j=0;j<7;j++)
	            printf("%d",k);
	       k++;
	       printf("\n");
	   }
	}
	return 0;
}