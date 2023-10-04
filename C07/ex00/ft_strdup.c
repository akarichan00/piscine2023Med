/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:18:49 by noben-ai          #+#    #+#             */
/*   Updated: 2023/10/02 11:46:31 by noben-ai         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		len;
	int		j;
	char	*copy;

	len = ft_strlen(src);
	j = 0;
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (j < len)
	{
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     char *src1 = "Nigger I !@#$$AAAfld54454";
//     char *copy1 = ft_strdup(src1);
//     printf("%s\n", copy1);

//     char *src2 = "Nigger I !@#$$AAAfld54454";
//     char *copy2 = strdup(src2);
//     printf("%s\n", copy2);
// }