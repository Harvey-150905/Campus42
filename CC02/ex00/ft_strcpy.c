#include <unistd.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (	src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

/*
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	char dest[10];
	
	if(argc < 2)
		return(1);
	ft_strcpy(dest, argv[1]);
	write(1, dest, ft_strlen(dest));
	return(0);
}*/
