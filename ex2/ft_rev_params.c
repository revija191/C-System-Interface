/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:28:41 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/03 18:50:26 by rlohitha         ###   ########.fr       */
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
	int	i;
	int	len;

	if (argc < 2)
		return (0);
	i = 1;
	while (argv[i])
		i++;
	while (argv[i - 1] && (i > 1))
	{
		len = ft_get_length(argv[i - 1]);
		write(1, argv[i - 1], len);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
