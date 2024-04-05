/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:42:58 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/04 13:44:15 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	p;
	int	c;

	p = 0;
	c = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[c] != '\0')
	{
		dest[p] = src[c];
		p++;
		c++;
	}
	dest[p] = '\0';
	return (dest);
}