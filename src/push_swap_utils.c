/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:15:19 by mbrousse          #+#    #+#             */
/*   Updated: 2024/03/02 16:51:05 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atol(const char *nptr)
{
	int		i;
	long	tab;
	int		sign;

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

static t_stack_node	*find_unrank(t_stack_node **list)
{
	t_stack_node	*tmp;

	tmp = *list;
	while (tmp != NULL)
	{
		if (tmp->rank == -1)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

static t_stack_node	*ft_findsm(t_stack_node **list)
{
	t_stack_node	*smallest;
	t_stack_node	*tmp;

	tmp = *list;
	smallest = find_unrank(list);
	while (tmp != NULL)
	{
		if (tmp->nbr < smallest->nbr && tmp->rank == -1)
			smallest = tmp;
		tmp = tmp->next;
	}
	return (smallest);
}

void	ft_set_rank(t_stack_node **list)
{
	t_stack_node	*tmp;
	size_t			i;

	i = 0;
	while (i < ft_listlen(*list))
	{
		tmp = ft_findsm(list);
		tmp->rank = i;
		tmp->b_nbr = ft_bin(i);
		if (tmp->b_nbr == NULL)
		{
			ft_free_list(list);
			exit (0);
		}
		i++;
	}
}
