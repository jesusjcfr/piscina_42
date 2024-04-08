/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:53:30 by jfermin           #+#    #+#             */
/*   Updated: 2024/04/07 21:53:59 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	indice;

	indice = 0;
	while (s1[indice] != '\0' && s2[indice] != '\0')
	{
		if (s1[indice] != s2[indice])
			return (s1[indice] - s2[indice]);
		indice++;
	}
	return (s1[indice] - s2[indice]);
}

int	ft_malloc(char *charset, char **chain, int longest, char *str) 
{		
	int	i;
	int	j;
	int	k;
	int	counter;

	i = 0;
    j = 0;
	counter = 0;
    while (i < counter)
        chain[i] = (char *)malloc((longest + 1) * sizeof(char));
        if (!chain[i])
            write(2, "Error\n", 6);
		return (0);
        k = 0;
        while (str[j] != *charset && str[j] != '\0')
            chain[i][k] = str[j];
            j++;
            k++;
        chain[i][k] = '\0';
        if (ft_strcmp(chain[i], "\0") != 0)
            i++;
        j++;
		return (1);
}

char	**ft_split_aux(int longest, char *str, char *charset)
{
	char	**chain;

	chain = (char **)malloc((1) * sizeof(char *));
	if (!chain)
		write(2, "Error\n", 6);
	return (0);
	ft_malloc(charset, chain, longest, str);


	/*i = 0;
	j = 0;
	while (i < counter)
		chain[i] = (char *)malloc((longest + 1) * sizeof(char));
		if (!chain[i])
			write(2, "Error\n", 6);
		return (0);
		k = 0;
		while (str[j] != *charset && str[j] != '\0')
			chain[i][k] = str[j];
			j++;
			k++;
		chain[i][k] = '\0';
		if (ft_strcmp(chain[i], "\0") != 0)
			i++;
		j++; */
	return (chain);
	free(chain);
}


int	ft_split_aux2(char *str, char *charset, int *size, int *counter)
{
	int	i;
	int	longest;

	i = 1;
	longest = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *charset && str[i - 1] != *charset)
		{
			if (longest < *size)
				longest = *size;
			*size = -1;
			*counter = *counter + 1;
		}
		if (str[i] == *charset && str[i - 1] == *charset)
			*size = -1;
		i++;
		*size = *size + 1;
	}
	if (str[i] == '\0' && str[i - 1] != *charset)
		*counter = *counter + 1;
	return (longest);
}

char	**ft_split(char *str, char *charset)
{
	int		counter;
	int		size;
	int		longest;
	int		i;

	if (ft_strcmp(str, "\0") == 0)
		return (0);
	i = 0;
	while (str[i] == *charset)
	{
		if (str[i + 1] == '\0')
			return (0);
		i++;
	}
	counter = 0;
	size = 1;
	longest = ft_split_aux2(str, charset, &size, &counter);
	if (longest < size)
		longest = size;
	return (ft_split_aux(longest, str, charset));
}
