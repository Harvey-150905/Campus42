//#include <unistd.h>
//#include <string.h>
/*
void	ft_puchar(char c)
{
	write(1, &c, 1);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/*
int main(int argc, char **argv)
{	
	int r;
	if (argc < 3)
		return(1);
	r = ft_strcmp(argv[1], argv[2]);
	write(1, "s1 es: ", 7);
	write(1, argv[1], 4);
	write(1, "\n", 1);
	write(1, "s2 es: ", 7);
       	write(1, argv[2], 4);
	write(1, "\n", 1);

	if(r == 0)
		write(1, "i", 1);
	else if(r < 0)
		write(1, "me", 2);
	else
		write(1, "ma", 2);
	return(0);
}*/
