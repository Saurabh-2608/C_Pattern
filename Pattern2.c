#include <stdio.h>

int main() 
{
	int n, i, j, k=1, k1;
	printf("Enter n :");
	scanf("%d",&n);
	//printf("Enter Start No. :");
	//scanf("%d",&s);
	//n = 6;
	for(i=0;i<n*2;i++)
	{
	   if(i<n)
	   {
	        for(j=0;j<=i;j++)
	        {
	            printf("%d",k);
	            if(j<i)
	                printf("*");
	            k++;
	        }
	        printf("\n");
	   }
	   else
	   {
	       if(i==n)
	       {
	           k=k-i;
	           k1 = k;
	       }
	       else
	       {
	            k1++;
	            k=k1;
	       }
	    
	       for(j=n*2-1;j>=i;j--)
	        {
	            k1--;
	            printf("%d",k);
	            if(j>i)
	                printf("*");
	            k++;
	        }
	        printf("\n");
	   }
	}
	return 0;
}