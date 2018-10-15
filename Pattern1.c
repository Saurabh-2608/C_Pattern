#include <stdio.h>

int main() 
{
	int n, s, i, j, k=1;
	printf("Enter n :");
	scanf("%d",&n);
	printf("Enter Start No. :");
	scanf("%d",&s);
	//n = 6;
	for(i=0;i<n*2;i++)
	{
	   if(i<n)
	   {
	        for(j=0;j<=i;j++)
	            printf("%d",s);
	        s++;
	        printf("\n");
	   }
	   else
	   {
	       s--;   
	       for(j=(n*2)-1;j>=i;j--)
	            printf("%d",s);
	       printf("\n");
	   }
	}
	return 0;
}