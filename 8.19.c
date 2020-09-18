/* 8.19	 	E	E	E	E	E
			D	D	D	D
			C	C	C
			B	B
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
					printf("%4c",i+64);
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

