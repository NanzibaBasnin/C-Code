/* 8.6		1
			2	3
			3	4	5
			4	5	6	7
			5	6	7	8	9
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
					printf("%4d",i+j-1);
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

