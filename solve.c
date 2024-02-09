/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:14:54 by mbrousse          #+#    #+#             */
/*   Updated: 2024/02/09 11:59:39 by mbrousse         ###   ########.fr       */
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
void	ft_sort_three(t_stack_node **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
	{
		if ((*a)->next->nbr > (*a)->next->next->nbr)
			return (ft_sa(a, false), ft_rra(a, false));
		if ((*a)->nbr < (*a)->next->next->nbr)
			return (ft_sa(a, false));
		return (ft_ra(a, false));
	}
	if ((*a)->nbr > (*a)->next->next->nbr)
		return (ft_rra(a, false));
	return (ft_rra(a, false), ft_sa(a, false));
}
// void	ft_solve(t_stack_node **a, t_stack_node **b)
// {
	

// 	while (ft_listlen(*a) > 3)
// 	{
		
// 	}
	
// }
