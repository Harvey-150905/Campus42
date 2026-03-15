#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	if(str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -=32;	
	}
	while (str[i])
	{
		if(!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= '0' && str[i] <= '9'))
		{
			if(str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return(str);
}

/*
int main(int argc, char **argv)
{
	int i;

	if(argc	< 2)
		return(1);
	
	ft_strcapitalize(argv[1]);

        i = 0;
	while(argv[1][i] != '\0')
      	{
		write(1, &argv[1][i], 1);
		i++;
	}
	return(0);
}*/
