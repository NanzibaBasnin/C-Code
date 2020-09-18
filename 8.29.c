/* 8.29	 	1
			2	2
			3	3	3
			4	4	4	4
			5	5	5	5	5
			4	4	4	4
			3	3	3
			2	2
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
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }


    for(i=n - 1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }

    return 0;

}

