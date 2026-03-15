#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return(str);
}

/*
int main(int argc, char **argv)
{
	int i;

	if(argc < 2)
		return(1);
	ft_strupcase(argv[1]);
	
	i = 0;
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}*/
