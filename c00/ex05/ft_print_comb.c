/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:15:18 by jfermin           #+#    #+#             */
/*   Updated: 2024/03/22 10:19:56 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(int print1, int print2, int print3)
{
	write(1, &print1, 1);
	write(1, &print2, 1);
	write(1, &print3, 1);
	if (print1 < 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	digit1;	
	int	digit2;	
	int	digit3;

	digit1 = 48;
	while (digit1 <= 55)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 56)
		{
			digit3 = digit2 + 1;
			while (digit3 <= 57)
			{
				print_digits(digit1, digit2, digit3);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}
