/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:11:29 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/01 11:54:50 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	p;

	p = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[p] != '\0')
	{
		if (str[p] < 32 || str[p] > 126)
			return (0);
		p++;
	}
	return (1);
}
