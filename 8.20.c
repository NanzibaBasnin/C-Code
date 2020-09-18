/* 8.20	 	A	B	C	D	E
			A	B	C	D
			A	B	C
			A	B
			A
*/



#include<stdio.h>


int main()
{

	int i,j,n;

	printf("How many line: ");
	scanf("%d",&n);

	for(i=n; i>=1; i--)
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

