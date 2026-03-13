#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;
	
	if(n >= 10)
		ft_putchar(n / 10);
	c = (n % 10 + '0');
	write(1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;
	
	i = 0;
	while(i < size - 1)
	{
		j = i + 1;
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int tab[5]= {10, 5, 4, 3, 11};
	int i = 0;

	ft_sort_int_tab(tab, 5);
	
	while( i < 5)
	{
		ft_putchar(tab[i]);
		write(1, " ", 1);
		i++;
	}	
}
