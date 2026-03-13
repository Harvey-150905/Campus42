#include <unistd.h>

void	ft_putchar(int n)
{
	char c;
	
	if(n >= 10)
		ft_putchar(n / 10);
	c = (n % 10 + '0');
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int n = 0;
	while(*str != '\0')
	{
		str++;
		n++;
	}
	return(n);
}

int main(void)
{	
	ft_putchar(ft_strlen("HOLA"));
	return(0);
}
