#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_char(int n)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_char(a);
			ft_putchar(' ');
			ft_print_char(b);
			if(!(a == 98 && b == 9))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
	return(0);
}
