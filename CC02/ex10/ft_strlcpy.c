#include <unistd.h>
#include <stdlib.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = 0;
	
	while(src[len])
		len++;
	if(size == 0)
		return(len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int main(int argc, char **argv)
{
	char dest[100];
	unsigned int size;
	unsigned int i;

	if(argc != 3)
		return(1);
	size = atoi(argv[2]);	
	ft_strlcpy(dest, argv[1], size);
	i = 0;
	while(dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}*/
