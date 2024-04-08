/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:45:55 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/07 19:39:37 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);
long	ft_atoi(char *str);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' && str[i + 1] == ' ')
			&& !(str[i] == ' ' && str[i + 1] == '\0'))
			write(1, &str[i], 1);
		i++;
	}
}

int	write_number(char **dict, int nb)
{
	int		i;
	int		j;
	int		num;
	char	**str_num;

	i = 0;
	while (dict[i])
	{
		str_num = ft_split(dict[i], ":");
		num = ft_atoi(str_num[0]);
		j = 0;
		if (num == nb)
		{
			ft_putstr(str_num[1]);
			return (0);
		}
		while (str_num[j])
			free(str_num[j++]);
			free(str_num);
			i++;
	}
	return (1);
}

int	write_ten_aux(char **dict, int nb)
{
	int		i;
	int		j;
	int		num;
	char	**str_num;

	i = 0;
	while (dict[i])
	{
		str_num = ft_split(dict[i], ":");
		num = ft_atoi(str_num[0]);
		j = 0;
		if (num >= (nb - 10) && num >= 20)
		{
			ft_putstr(str_num[1]);
			write(1, " ", 1);
			return (0);
		}
		while (str_num[j])
			free(str_num[j++]);
			free(str_num);
			i++;
	}
	return (1);
}

int	write_ten(char **dict, int nb)
{
	if (nb == 100)
	{
		write_number(dict, 1);
		write(1, " ", 1);
		write_number(dict, 100);
		return (0);
	}
	if (nb <= 20)
		write_number(dict, nb);
	else if (nb % 10 == 0)
	{
		write_number(dict, nb);
		return (0);
	}
	else
	{
		write_ten_aux(dict, nb);
		write_number(dict, nb % 10);
		return (0);
	}
	return (1);
}
