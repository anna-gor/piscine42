#include <stdio.h>
void ft_ultimate_ft(int ***nbr)
{
***nbr=42;
}

int main()
{
	int a =1;
	int *prt1;
	int **prt2;
	int ***prt3;
	prt1 = &a;
	prt2=&prt1;
	prt3=&prt2;

	printf("do %d", ***prt3);
	ft_ultimate_ft(prt3);
	printf("po prt = %d", ***prt3);


return (0);
}
