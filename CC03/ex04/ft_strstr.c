#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	char *s, *f;

	if (!*to_find)
		return str;
	while (*str)
	{	
		s = str;
		f = to_find;
		while (*s && *f && *s == *f)
			s++, f++;
		if (!*f)
			return str;
		str++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	char *r;
	if(argc < 3)
		return(1);
	
	r = ft_strstr(argv[1], argv[2]);

	printf("str %s\n", argv[1]);
	printf("find %s\n", argv[2]);
	
	if (r)
		printf("encontrado %s\n", r);
	else
		printf("no encontrado\n");
	return 0;
}
