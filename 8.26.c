/* 8.26	 			A
				B		B
			C		C		C
		D		D		D		D
	E		E		E		E		E
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
					printf("%4d",i);
				}

			printf("\n");
		}

	getch();

	return 0;

}

