#include <unistd.h>
#include <stdlib.h>

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z')))
			return(0);
		i++;	
	}
	return (1);
}

/*
int main(int argc, char **argv)
{
	int result;
	if(argc < 2)
		return(1);

	result = ft_str_is_alpha(argv[1]);
	if (result == 1)
	{
		write(1, "1\n", 2);
	}
	else
	{
		write(1, "0\n", 2);
	}
	return(0);
}*/
