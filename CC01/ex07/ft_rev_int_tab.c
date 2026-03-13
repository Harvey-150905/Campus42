#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	if(n >= 10)
		ft_putchar(n / 10);
	c = (n % 10 + '0');
	write(1, &c, 1);
	
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

int main(void)
{
	int tab[6] = {1, 2, 3, 4, 5, 43};
	int i = 0;

	ft_rev_int_tab(tab, 6);
	while( i < 5)
	{
		ft_putchar(tab[i]);
		i++;
	}
}
