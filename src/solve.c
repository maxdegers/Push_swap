/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:14:54 by mbrousse          #+#    #+#             */
/*   Updated: 2024/02/11 04:00:10 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_stack_is_sort(t_stack_node **list)
{
	t_stack_node	*tmp;
	int				i;

	i = 0;
	tmp = *list;
	while (tmp->next != NULL)
	{
		if (tmp->rank != i)
			return (0);
		i++;
		tmp = tmp->next;
	}
	return (1);
	
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

static void	ft_push_sm(t_stack_node **a, t_stack_node **b)
{
	int				smal;
	t_stack_node	*tmp;
	
	tmp = *a;
	smal = tmp->nbr;
	while (tmp->next != NULL)
	{
		if (smal > tmp->nbr)
			smal = tmp->nbr;
		tmp = tmp->next;
	}
	if (smal > tmp->nbr)
			smal = tmp->nbr;
	while ((*a)->nbr != smal)
	{
		ft_ra(a);
	}
	ft_pb(a, b);
}

void	ft_medium_sort(t_stack_node **a, t_stack_node **b)
{
	int				size;
	
	size = ft_listlen(*a);
	if (size == 4)
	{
		ft_push_sm(a, b);
		ft_sort_three(a);
		ft_pa(a, b);
	}
	else
	{
		ft_push_sm(a, b);
		ft_push_sm(a, b);
		ft_sort_three(a);
		ft_pa(a, b);
		ft_pa(a, b);
	}
}

void	ft_solve(t_stack_node **a, t_stack_node **b)
{
	int	i;
	size_t	j;
	size_t	size;
	
	size = ft_listlen(*a);
	i = 8;
	while (ft_stack_is_sort(a) == 0 && i >= 0)
	{
		j = 0;
		while (j < size)
		{
			if ((*a)->b_nbr[i] == '0')
			{
				if (j != size - 1)
					ft_pb(a, b);
			}
			else
				ft_ra(a);
			j++;
		}
		while (*b != NULL)
			ft_pa(a, b);
		i--;
	}
}
