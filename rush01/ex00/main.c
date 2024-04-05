/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 11:25:22 by jfermin           #+#    #+#             */
/*   Updated: 2024/03/31 21:05:38 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	matriz(char *c);

int	main(int argc, char *argv[])
{
	char	*c;

	if (argc != 2)
	{
		write(1, "ERROR", 6);
		return (1);
	}
	c = argv[1];
	matriz(c);
	return (0);
}
