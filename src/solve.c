/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:14:54 by mbrousse          #+#    #+#             */
/*   Updated: 2024/02/09 17:03:31 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
			return (ft_sa(a), ft_rra(a));
		if ((*a)->nbr < (*a)->next->next->nbr)
			return (ft_sa(a));
		return (ft_ra(a));
	}
	if ((*a)->nbr > (*a)->next->next->nbr)
		return (ft_rra(a));
	return (ft_rra(a), ft_sa(a));
}

void	ft_medium_sort(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*smalest;
	int				nbr;
	while (ft_listlen > 3)
	{
		smalest = *a;
		nbr = smalest->nbr;
		while (smalest->next != NULL)
		{
			if (smalest->nbr < nbr)
				nbr = smalest->nbr;
			smalest = smalest->next;
		}
		ft_pb(a, b);
	}
	ft_sort_three(a);
	ft_pa(a, b);
	ft_pa(a, b);
}

void	ft_solve(t_stack_node **a, t_stack_node **b)
{
	int	i;
	int	j;
	int	size;
	
	size = ft_listlen(a);
	i = 8;
	while (ft_stack_is_sort(a) == 0 && i >= 0)
	{
		j = 0;
		while (j < size)
		{
			if ((*a)->b_nbr[i] == '0')
				if (j != size - 1)
					ft_pb(a, b);
			else
				ft_ra(a);
			j++;
		}
		while (*b != NULL)
			ft_pa(a, b);
		i--;
	}
}
