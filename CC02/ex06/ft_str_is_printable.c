#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] < 32 || str[i] > 126)
			return(0);
		i++;
	}
	return(1);
}
/*
int main(int argc, char **argv)
{
	int rst;

	if(argc < 2)
		return(1);
	rst = ft_str_is_printable(argv[1]);
	if(rst == 1)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}*/
