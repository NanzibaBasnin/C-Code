/* 8.16	 	5	6	7	8	9
			4	5	6	7
			3	4	5
			2	3
			1
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
					printf("%4d",i+j-1);
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

