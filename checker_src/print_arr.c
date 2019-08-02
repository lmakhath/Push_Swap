#include "checker.h"

void	print_arr(int *a, int i, int a_c)
{
	int j;
	int k;

	j = a_c;
	k = 0;
	ft_putstr("a\tb\n");
	ft_putstr("-\t-\n");
	while (j < i && k < a_c)
	{
		ft_putstr("\e[35m");
		ft_putnbr(a[j]);
		ft_putstr("\e[0m");
		ft_putstr("\t\e[33m");
		ft_putnbr(a[k]);
		ft_putstr("\e[0m\n");
		j++;
		k++;
	}
	while(j < i)
	{
		ft_putstr("\e[35m");
		ft_putnbr(a[j]);
		ft_putstr("\e[0m\n");
		j++;
	}
	while(k < a_c)
	{
		ft_putstr("\t\e[33m");
		ft_putnbr(a[k]);
		ft_putstr("\e[0m\n");
		k++;
	}
}