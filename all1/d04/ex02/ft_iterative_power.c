#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
 	int i=1;
	if (power<0)
	{
		return (0);
	}
	if (power==0)
	{return (1);}
		while(power>0){
		if (power%2==1)
		{
			i=i*nb;
			power=power-1;
		}
		else
		{
			nb=nb*nb;
			power = power/2;
		}
	
	}return(i);


}

int main()
{
printf("%d",ft_iterative_power(2, 4));
return(0);
}
