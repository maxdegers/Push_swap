/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:15:19 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/22 18:54:38 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atol(const char *nptr)
{
	int	i;
	long	tab;
	int	sign;

	i = 0;
	tab = 0;
	while (((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32) && nptr[i])
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		tab = tab * 10;
		tab += (nptr[i] - '0');
		i++;
	}
	return (tab * sign);
}