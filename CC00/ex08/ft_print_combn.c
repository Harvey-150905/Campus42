#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb(int *tab, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_pinta(int *tab, int n, int index, int start)
{
	int i;

	if (index == n)
	{
		ft_comb(tab, n);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		tab[index] = i;
		ft_pinta(tab, n, index + 1, i + 1);
		i++;
	}

}

void	ft_print_combn(int n)
{
	int tab[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_pinta(tab, n, 0, 0);
}

int main(void)
{
	ft_print_combn(6);
	return(0);
}
