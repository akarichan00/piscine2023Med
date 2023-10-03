/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:00:22 by noben-ai          #+#    #+#             */
/*   Updated: 2023/09/24 18:22:23 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_char_is_numeric(char c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

char	*mystrlowcase(char *str)
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
	int	boolean;

	i = 0;
	boolean = 1;
	mystrlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_char_is_alpha(str[i]) == 1 || ft_char_is_numeric(str[i]) == 1)
		{
			if (boolean == 1 && ft_char_is_alpha(str[i]) == 1)
			{
				str[i] -= 32;
			}
			boolean = 0;
		}
		else
		{
			boolean = 1;
		}
		i++;
	}
	return (str);
}
