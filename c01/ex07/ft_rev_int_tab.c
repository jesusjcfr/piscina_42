/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:12:43 by jfermin           #+#    #+#             */
/*   Updated: 2024/03/29 10:40:42 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	p;
	int	c;

	p = 0;
	size = size - 1;
	while (size > p)
	{
		c = tab[p];
		tab[p] = tab[size];
		tab[size] = c;
		p++;
		size--;
	}
}
