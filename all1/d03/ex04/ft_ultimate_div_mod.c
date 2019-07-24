#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int div = (*a)/(*b);
	int mod = (*a)%(*b);
	*a = div;
	*b = mod;
}

int main()
{
	int a1=13;
	int b1=6;
	int *a;
	int *b;
	a=&a1;
	b=&b1;
	ft_ultimate_div_mod(a, b);
	printf("div = %d, mod = %d\n",*a, *b);

}

