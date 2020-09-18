/* 8.34	 					1
						2	3	2
					3	4	5	4	3
				4	5	6	7	6	5	4
			5	6	7	8	9	8	7	6	5
		6	7	8	9	0	1	0	9	8	7	6
	7	8	9	0	1	2	3	2	1	0	9	8	7	 
		6	7	8	9	0	1	0	9	8	7	6
			5	6	7	8	9	8	7	6	5
				4	5	6	7	6	5	4	
					3	4	5	4	3
						2	3	2
							1
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
					printf("    ");
				}
			for(j=i; j<=2*i-1; j++)
				{
					printf("%4d",j%10);
				}
			for(j=2*i-2; j>=i; j--)
				{
					printf("%4d",j%10);
				}
			printf("\n");
		}
	
	for(i=n-1; i>=1; i--)
		{
			for(j=1; j<=n-i; j++)
				{
					printf("    ");
				}
			for(j=i; j<=2*i-1; j++)
				{
					printf("%4d",j%10);
				}
			for(j=2*i-2; j>=i; j--)
				{
					printf("%4d",j%10);
				}
			
			printf("\n");
		}
	
	getch();

	return 0;

}

