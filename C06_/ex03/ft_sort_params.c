/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:05:46 by noben-ai          #+#    #+#             */
/*   Updated: 2023/09/30 12:45:46 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **x, char **y)
{
	char	*tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	showarg(char **x, int ac)
{
	int	j;

	j = 1;
	while (j < ac)
	{
		ft_putstr(x[j]);
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	swapped;
	int	len;

	swapped = 1;
	len = argc - 1;
	while (swapped == 1)
	{
		swapped = 0;
		i = 1;
		while (i < len)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				swapped = 1;
			}
			i++;
		}
		len--;
	}
	showarg(argv, argc);
}
