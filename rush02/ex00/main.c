/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:37:19 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/07 12:37:29 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		errors(int ac, char *av[]);
int		rush(unsigned int nb, char *route);
long	ft_atoi(char *str);

int	main(int ac, char *av[])
{
	int				digits;
	unsigned int	nb;
	char			*route;

	if (ac == 2)
	{
		route = "numbers.dict";
		nb = ft_atoi(av[1]);
	}
	if (ac == 3)
	{
		route = av[1];
		nb = ft_atoi(av[2]);
	}
	digits = 0;
	if (errors(ac, av) == 1)
		return (1);
	while (av[ac - 1][digits] != '\0')
		digits++;
	return (rush(nb, route));
}
