/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:25:09 by noben-ai          #+#    #+#             */
/*   Updated: 2023/10/03 08:54:06 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	array = malloc(len * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = array;
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (len);
}

// #include <stdio.h>

// int main()
// {
//     int min = 0;
//     int max = 10;
//     int **p;
// 	int *array;
//     p = &array;
//     int size = ft_ultimate_range(p,min,max);
//     printf("size of the array: %i\n", size);

//     // int	min;
// 	// int	max;
// 	// int	*tab;
// 	// int	size;
// 	// // int	i = 0;

// 	// min = 5;
// 	// max = 15;
// 	// size = ft_ultimate_range(&tab, min, max);
// 	// printf("size: %d\n", size);
// }