#include <unistd.h>
#include <stdlib.h>
char 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(int argc, char **argv)
{
	char dest[100];
	unsigned int n;

	if(argc < 3)
		return(1);
	n = (unsigned int)atoi(argv[2]);
	ft_strncpy(dest, argv[1], n);
	write(1, dest, n);
	return(0);

}
