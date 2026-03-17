#include <string.h>
#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
		dest++;

	while ((*dest++ = *src++));

	*dest = '\0';
	return(start);
}

int main(int argc, char **argv)
{
	char buffer[100];

	if(argc < 3)
		return(1);
	strcpy(buffer, argv[1]);
	ft_strcat(buffer, argv[2]);
	printf("concatenado %s\n", buffer);
	return(0);
}
