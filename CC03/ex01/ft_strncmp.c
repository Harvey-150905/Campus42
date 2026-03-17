#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return(0);

	while(*s1 && *s1 == *s2 && n > 1)
	{
		s1 ++;
		s2 ++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main(int argc, char **argv)
{
	int r;
	int n;

	if(argc < 4)
		return(1);
	n = atoi(argv[3]);
	r = ft_strncmp(argv[1], argv[2], n);
	printf("valor 1 %s\n", argv[1]);
	printf("valor 2 %s\n", argv[2]);
	printf("recorrera %d\n", n);
	
	if (r == 0)
		printf("iguales\n");
	else if (r < 0)
		printf("s1 menor\n");
	else
		printf("s1 mayor\n");
	return(0);
}
