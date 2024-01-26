/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:14:54 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/26 12:31:34 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_stack_is_sort(t_stack_node *list)
{
	while (list->next != NULL)
	{
		if (list->nbr > list->next->nbr)
		{
			return (false);
		}
		list = list->next;
	}
	return (true);
}

// void	ft_solve(t_stack_node **a, t_stack_node **b)
// {
	

// 	while (ft_listlen(*a) > 3)
// 	{
		
// 	}
	
// }
