/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:47:27 by noben-ai          #+#    #+#             */
/*   Updated: 2023/10/02 12:19:30 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;
	int	i;

	i = 0;
	range = max - min;
	array = malloc(range * sizeof(int));
	if (min >= max)
		return (NULL);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

// #include <stdio.h>

// int main() {
//     int min = 0;
//     int max = 1000;

//     int *result = ft_range(min, max);

//     // Check if the result is not a null pointer (valid range)
//     if (result != NULL) {
//         // Print the values in the array
//         for (int i = 0; i < (max - min); i++) {
//             printf("%d ", result[i]);
//         }
//         printf("\n");

//         // Free the allocated memory for the array
//         free(result);
//     } else {
//         // Handle the case of an invalid range
//         printf("Invalid range: min is greater than or equal to max.\n");
//     }

//     return (0);
// }