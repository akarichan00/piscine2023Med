/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:27:19 by noben-ai          #+#    #+#             */
/*   Updated: 2023/10/05 11:50:36 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	full_len(char **strings, int size, int sep_len)
{
	int	full_len;
	int	i;

	full_len = 0;
	i = 0;
	while (i < size)
	{
		full_len += ft_strlen(strings[i]);
		full_len += sep_len;
		i++;
	}
	full_len -= sep_len;
	return (full_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;
	char	*concatenated_string;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	string = malloc((full_len(strs, size, ft_strlen(sep)) + 1) * sizeof(char));
	concatenated_string = string;
	if (string == NULL)
		return (0);
	while (i < size)
	{
		ft_strcpy(string, strs[i]);
		string += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_strlen(sep);
		}
		i++;
	}
	*string = '\0';
	return (concatenated_string);
}
