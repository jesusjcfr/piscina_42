/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:52:44 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/07 12:52:56 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_atoi(char *str);

int	errors_ac2(char *av[])
{
	int	i;

	i = 0;
	if (ft_atoi(av[1]) > 4294967295)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] < 48 || av[1][i] > 57)
		{
			write (2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	errors_ac3(char *av[])
{
	int	i;

	i = 0;
	if (ft_atoi(av[1]) > 4294967295)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	while (av[2][i] != '\0')
	{
		if (av[2][i] < 48 || av[2][i] > 57)
		{
			write (2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	errors(int ac, char *av[])
{
	if (ac < 2 || ac > 3)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	if (ac == 2)
		return (errors_ac2(av));
	if (ac == 3)
		return (errors_ac3(av));
	return (0);
}
