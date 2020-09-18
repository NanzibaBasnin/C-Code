/* 8.37	 	1
			1	1
			1	2	1
			1	3	3	1
			1	4	6	4	1
			1	5	10	10	5	1
			1	6	15	20	15	6	1
*/



#include<stdio.h>


int main()
{

	int i,j,c,n;

	printf("How many line: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
		{
			c=1;
			for(j=1; j<=i; j++)
				{
					printf("%4d",c);
					c=c*(i-j)/j;
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

