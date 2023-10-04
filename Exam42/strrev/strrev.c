int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
    int i;
    char temp;
    int len;

    i = 0;
    len = ft_strlen(str) - 1;

    while(i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;

        i++;
        len--;
    }
    return str;
}
#include <stdio.h>
int main (int ac, char **av)
{
    if (ac == 2)
    {
        ft_strrev(av[1]);
        printf("\%s\n",av[1]);
    }
}