/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:18:55 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/04 17:15:34 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	cad1;
	int	cad2;

	cad1 = 0;
	if (*to_find == '\0')
		return (str);
	while (str[cad1] != '\0')
	{
		cad2 = 0;
		while (str[cad1] == to_find[cad2])
		{
			cad1++;
			cad2++;
			if (to_find[cad2] == '\0')
			{
				return (&str[cad1 - cad2]);
			}
		}
		cad1 = cad1 - cad2;
		cad1+;
	}
	return (0);
}
