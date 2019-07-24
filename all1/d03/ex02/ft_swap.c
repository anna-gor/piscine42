#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int t = *a;
	*a=*b;
	*b = t;
}

int main()
{
	int a1=2;
	int b1=4;
	int *a;
	int *b;
	a=&a1;
	b=&b1;
	printf("%d",*a);
	printf("%d",*b);
	ft_swap(a,b);
	printf("%d",*a);
	printf("%d",*b);
	return (0);
}
