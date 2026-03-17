#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *start;
	
	start = dest;
	while(*dest)
		dest++;
	while(*src && nb--)
		*dest++ = *src++;
	*dest = '\0';
	return(start);
}

int main(int argc, char **argv)
{
	char buffer[100];
	unsigned int	nb;
 	if(argc < 4)
		return(1);
	strcpy(buffer,argv[1]);
	nb = atoi(argv[3]);
	ft_strncat(buffer, argv[2], nb);
	printf("destino %s\n", argv[1]);
	printf("caracter a copiar %s\n", argv[2]);
	printf("caracter copiado %u\n", nb);
	printf("concatenado %s\n", buffer);
	
	return(0);
}
