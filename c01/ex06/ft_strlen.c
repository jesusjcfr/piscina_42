/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:45:04 by jfermin           #+#    #+#             */
/*   Updated: 2024/03/29 10:22:53 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_strlen(char *str)
{
	int	char_count;

	char_count = 48;
	while (*str != '\0')
	{
		str++;
		char_count++;
	}
	return (char_count);
}

int	main(void)
{
	int count = ft_strlen("012345678910");
	write(1, &count, 1);
}
