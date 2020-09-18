/* 8.15	 	6	7	8	9	10
			5	6	7	8
			4	5	6
			3	4
			2
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
					printf("%4d",i+j);
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

