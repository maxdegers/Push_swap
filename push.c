/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:20:11 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/19 09:42:23 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_stack_node **start, t_stack_node **end)
{
	*start = NULL;
	*end = NULL;
	return ;
}

void	ft_pa(t_stack_node **a, t_stack_node **b, bool action)
{
	ft_push(b, a);
	if (!action)
		ft_printf("pa\n");
}

void	ft_pb(t_stack_node **a, t_stack_node **b, bool action)
{
	ft_push(a, b);
	if (!action)
		ft_printf("pb\n");
}
