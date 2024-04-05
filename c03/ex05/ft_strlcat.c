/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:56:15 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/04 19:17:11 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	p;
	unsigned int	c;

	p = 0;
	c = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	if (size <= p)
	{
		return (p + size);
	}
	while (src[c] != '\0' && c < (size -1))
	{
		dest[p] = src[c];
		p++;
		c++;
	}
	dest[p] = '\0';
	return (*dest + *src);
}
