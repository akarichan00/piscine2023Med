/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:47:27 by noben-ai          #+#    #+#             */
/*   Updated: 2023/10/05 10:08:02 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	result = malloc(size * sizeof(int));
	if (min >= max)
		return (NULL);
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
