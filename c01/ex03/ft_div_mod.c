/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfermin <jfermin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:33:00 by jfermin           #+#    #+#             */
/*   Updated: 2024/03/29 09:51:52 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c;
	*div = a / b;
	*mod = a % b;
}

int main(void)
{

int div_m;
int	mod_m;

	ft_div_mod(5, 3, &div_m, &mod_m);
	printf("div = %i\nmod =%i\n",div_m,mod_m);

}
