/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:05:08 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/18 14:19:52 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 0 && str[i] > 9 && str[i] != '-')
		{
			ft_putstr_fd("Error", 0);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_error_duplicated(t_stack_node **list, int nbr)
{
	
}
