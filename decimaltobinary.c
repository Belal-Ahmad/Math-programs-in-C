#include <stdio.h>
#include <conio.h>
#include <math.h>
//AaSh
void main()
{
	int r, a, j, q;
	printf("Input Value of n\n");
	scanf_s("%d", &q);
	
	j = 0;
	for (a = 0; q > 1;a=a+1) 
	{
		r = q % 2;
		q = q / 2;	
		j = (r*pow(10, a)) + j;
	}
	j = (1 * pow(10, a) + j);
	printf("\n%d",j);
	_getch();
}

