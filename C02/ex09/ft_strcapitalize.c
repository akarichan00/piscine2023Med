/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:00:22 by noben-ai          #+#    #+#             */
/*   Updated: 2023/09/20 15:39:13 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	firstchar;

	i = 0;
	firstchar = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (firstchar == 1)
				str[i] -= 32;
			firstchar = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
				firstchar = 0;
		else
			firstchar = 1;
		i++;
	}
	return (str);
}

int main()
{
    char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("Normalword: %s\n", string);
    char * cap = ft_strcapitalize(string);
    printf("capitalized: %s\n", cap);
    
}
