/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:18:28 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/03 18:49:46 by rlohitha         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	len;
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	while (argv[i])
	{
		len = ft_get_length(argv[i]);
		write (1, argv[i], len);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
