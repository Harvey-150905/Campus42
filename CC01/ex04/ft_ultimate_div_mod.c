#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int dvs;
	int rst;

	dvs = *a / *b;
	rst = *a % *b;
	*a = dvs;
	*b = rst;
}

void	ft_putchar(int n)
{
	char	c;

	if(n >= 10)
		ft_putchar(n / 10);
	c = (n % 10 + '0');
	write(1, &c, 1);
}

int main(void)
{
	int x = 10;
	int y = 2;
	ft_ultimate_div_mod(&x, &y);
	ft_putchar(x);
	write(1, " ", 1);
	ft_putchar(y);
	write(1, " ", 1);
	return(0);
}
