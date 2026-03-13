#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*void	imprimir(int n)
{
	char c;

	if(n >10)
		imprimir(n / 10);
	c = (n % 10 + '0');
	write(1, &c, 1);
}

int main(void)
{
	int a;

	ft_ft(&a);
	imprimir(a);
	return(0);
}*/
