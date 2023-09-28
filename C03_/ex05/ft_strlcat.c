/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:56:41 by noben-ai          #+#    #+#             */
/*   Updated: 2023/09/27 12:45:34 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;
	unsigned int	k;

	i = 0;
	lendest = (unsigned int)ft_strlen(dest);
	lensrc = (unsigned int)ft_strlen(src);
	k = lendest;
	if (size == 0 || size <= lendest)
	{
		return (lensrc + size);
	}
	while (src[i] != '\0' && i < size - lendest - 1)
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (lendest + lensrc);
}
