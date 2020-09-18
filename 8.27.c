/* 8.27	 			A	 	 	 	 
				B		B
			C		C		C
		D		D		D		D
	E		E		E		E		E
		D		D		D		D
			C		C		C
				B		B
					A
				
*/



#include<stdio.h>


int main()
{

	int i,j,n;

	printf("How many line: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
		{
			for(j=1; j<=n-i; j++)
				{
					printf("  ");
				}
			for(j=1; j<=i; j++)
				{
					printf("%4c",i+64);
				}
			
			printf("\n");
		}

	for(i=n-1; i>=1; i--)
		{
			for(j=1; j<=n-i; j++)
				{
					printf("  ");
				}
			for(j=1; j<=i; j++)
				{
					printf("%4c",i+64);
				}
			
			printf("\n");
		}
	
	getch();

	return 0;

}

