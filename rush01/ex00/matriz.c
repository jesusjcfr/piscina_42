/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:33:28 by jfermin           #+#    #+#             */
/*   Updated: 2024/03/31 20:54:40 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	matriz(char *c)
{
	int		matriz[4][4];
	int		fila;
	int		columna;
	char	g;

	fila = 0;
	columna = 0;
	while (fila < 4)
	{
		columna = 0;
		while (columna < 4 && *c != '\0')
		{
			g = *c;
			matriz[fila][columna] = g;
			write(1, &matriz[fila][columna], 4);
			write(1, " ", 1);
			columna++;
			c = c + 2;
		}
		write(1, "\n", 1);
		fila++;
	}
}
