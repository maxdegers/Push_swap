/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:41:58 by mbrousse          #+#    #+#             */
/*   Updated: 2023/12/18 10:56:17 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoint(unsigned long long nbr, char *base)
{
	char	tab[17];
	int		i;
	int		tmp;

	i = 17;
	if (!nbr)
		return (ft_putstr("(nil)"));
	tmp = ft_putstr("0x");
	if (tmp == -1)
		return (-1);
	tab[i--] = '\0';
	while (nbr >= 16)
	{
		tab[i] = base[nbr % 16];
		i--;
		nbr /= 16;
	}
	tab[i] = base[nbr % 16];
	tmp = ft_putstr(&tab[i]);
	if (tmp == -1)
		return (-1);
	return (tmp + 2);
}
