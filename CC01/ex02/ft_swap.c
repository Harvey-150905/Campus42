#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int amc;

       	amc = *a;
	*a = *b;
	*b = amc;
}

void	ft_putchar(int n)
{
	char c;
	if(n >= 10)
		ft_putchar( n / 10);
	c = (n % 10 + '0') ;
	write(1, &c, 1);
}

int main(void)
{
	int x = 1;
	int y = 9;

	ft_swap(&x, &y);
	ft_putchar(x);
	ft_putchar(y);
	return(0);
}
