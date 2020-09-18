/* 8.7		0
			1	0
			0	1	0
			1	0	1	0
			0	1	0	1	0
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
					printf("%4d",(i+j)%2);
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

