#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *d = dest;
	char *s = src;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);

	if (size <= dlen)
		return (size + slen);
	
	d = dest + dlen;

	while (*s && (d - dest) < size - 1)
	{
		*d++ = *s++;
	}

	*d= '\0';

	return (dlen + slen);
}

int main(int argc, char **argv)
{
	printf("aa %d\n", argc);
	unsigned int r;
	char buffer[100];
	unsigned int	size;

	if(argc < 4)
		return (1);
	strcpy(buffer, argv[1]);
	size = atoi(argv[3]);
	r = ft_strlcat(buffer, argv[2], size);
	
	printf("buffer %s\n", buffer);
	printf("la cadena total es de %u\n", r);

	return(0);
}
