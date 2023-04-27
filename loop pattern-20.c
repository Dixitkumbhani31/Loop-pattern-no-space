#include<stdio.h>

main()

{   
    int r,c;

	for(r=1;r<=5;r++)
	{
	    for(c=r;c>=1;c--)
		{
			if(r%2==c%2)
			{
				printf("-");
			}
			else
			{
				printf("|");
			}
		}
		printf("\n");
    }
}
