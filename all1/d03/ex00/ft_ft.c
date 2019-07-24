#include <stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int a =1;
	int *prt;
	prt = &a;
	
	printf("do %d", *prt);
	ft_ft(prt);
	
	printf("po prt = %d", *prt);

	
	return (0);

}

