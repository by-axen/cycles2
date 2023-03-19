#include <stdio.h>

/* программа, которая будет просить ввести число и сопоставлять его с неким эталонным числом */

int main()
{
	int a=7;
	while(a!=5)
	{
		scanf("%i",&a);
		if(a>5)
		{
			printf("bolshe\n");
		}
		else
		{
			if(a<5)
			{
			printf("menshe\n");
			}
		}
	}
	printf("ti otgadal");
	return 0;
}
