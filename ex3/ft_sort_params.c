/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:48:15 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/03 18:51:06 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_write(char **argv)
{
	int	len;
	int	i;

	i = 1;
	while (argv[i])
	{
		len = ft_get_length(argv[i]);
		write(1, argv[i], len);
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_sort_argv(char **argv, int n)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (argv[i] && i < n)
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc < 2)
		return (0);
	n = 1;
	while (argv[n])
		n++;
	if (n > 1)
	{
		ft_sort_argv(argv, n);
		ft_write (argv);
	}
	return (0);
}
