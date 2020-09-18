/* 8.10	 	A
			A	B
			A	B	C
			A	B	C	D
			A	B	C	D	E
*/



#include<stdio.h>


int main()
{

	int i,j,n;

	printf("How many line: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
		{
			for(j=1; j<=i; j++)
				{
					printf("%4c",j+64);
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

