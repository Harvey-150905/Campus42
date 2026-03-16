#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(unsigned char c)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putaddr(unsigned long long addr)
{
	char	*base;
	int	i;
	char	hex[16];

	base = "0123456789abcdef";
	i = 15;
	while (i >= 0) 
	{
		hex[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, hex, 1);
}

void	ft_print_hex_content(unsigned char *str, unsigned int size)
{
	unsigned int	i;
	
	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_hex(str[i]);
		else
			write(1, "  ", 2);
		if (i % 2)
			ft_putchar(' ');
		i++;
	}
}

void	ft_print_ascii(unsigned char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	line_size;
	unsigned char	*str;

	str = (unsigned char *)addr;
	i = 0;
	while (i < 16)
	{
		if (size - i >= 16)
			line_size = 16;
		else
			line_size = size - i;
		ft_putaddr((unsigned long long)(str +i));
		write(1, ": ", 2);
		ft_print_hex_content(str + i, line_size);
		ft_print_ascii(str + i, line_size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

int	main(void)
{
	char	str[] = "Bonjour les aminches\t\n\tc\7 est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";

	ft_print_memory(str, sizeof(str));
	return (0);
}
