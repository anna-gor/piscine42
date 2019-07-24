#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int main()
{
	int a=25;
	int b=3;
	int *mod;
	int *div;
	int c;
	int d;
	mod = &c;
	div = &d;
	ft_div_mod(a, b, div, mod);
	printf("div = %d, mod = %d\n",*div, *mod);
	return (0);
}

