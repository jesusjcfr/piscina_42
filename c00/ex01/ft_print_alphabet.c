/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcel...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:32:18 by jfermin           #+#    #+#             */
/*   Updated: 2024/03/22 20:24:42 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	ascii;

	ascii = 97;
	while (ascii <= 122)
	{
		write(1, &ascii, 1);
		ascii++;
	}
}

int	main ()
{
	ft_print_alphabet();
	return (0);
}
