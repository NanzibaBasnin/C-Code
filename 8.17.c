/* 8.17	 	0	1	0	1	0
			1	0	1	0
			0	1	0
			1	0
			0
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
					printf("%4d",(i+j)%2);
				}
			printf("\n");
		}
	
	getch();

	return 0;

}

