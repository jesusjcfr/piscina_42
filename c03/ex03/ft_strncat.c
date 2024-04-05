/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:59:15 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/04 13:15:56 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	p;
	unsigned int	c;

	p = 0;
	c = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[c] != '\0' && nb != c)
	{
		dest[p] = src[c];
		p++;
		c++;
	}
	dest[p] = '\0';
	return (dest);
}
