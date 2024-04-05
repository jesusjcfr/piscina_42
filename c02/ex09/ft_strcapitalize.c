/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:10:29 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/01 18:54:48 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;
	int	word_init;

	word = 0;
	word_init = 0;
	i = 1;
	while (str[i] != '\0')
	{
		word = 0;
		while (word == 0)
		{
			if (word_init == 0)
			{
				str[i] = str[i] - 32;
				i++;
				word_init++;
			}
			else if ((str[i] > 122 || str[i] < 97
					|| str[i] > 91 || str[i] < 65))
			{
				str[i] = str[i];
				word = 1;
				word_init = 0;
				i++;
			}
			else if ((word_init != 0) && (str[i] > 122
					|| str[i] < 97 || str[i] > 91 || str[i] < 65))
			{
				str[i] = str[i];
				i++;
			}
		}
	}
	return (str);
}
