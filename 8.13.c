/* 8.13	 	1	1	1	1	1
			0	0	0	0
			1	1	1
			0	0
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
					printf("%4d",i%2);
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

