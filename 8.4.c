/* 8.4		1
			1	0
			1	0	1
			1	0	1	0
			1	0	1	0	1
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
					printf("%d ",j);
				}
			printf("\n");
		}



	return 0;

}

