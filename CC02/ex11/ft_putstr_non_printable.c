#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa(unsigned char c)
{
	char *base;

	base="0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			hexa((unsigned char)str[i]);
		i++;
	}
}

/*int main(int argc, char **argv)
{
	if(argc < 2)
		return(1);
	
	ft_putstr_non_printable(argv[1]);

	return(0);
}*/
