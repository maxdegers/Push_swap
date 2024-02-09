/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:20:11 by mbrousse          #+#    #+#             */
/*   Updated: 2024/02/09 12:04:02 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_stack_node **start, t_stack_node **end)
{
	t_stack_node	*tmp;
	
	if (!start || !*start)
		return ;
	tmp = *start;
	
	(*start) = (*start)->next;
	if (*start)
        (*start)->prev = NULL;
	
	tmp->next = (*end);
	if (*end)
        (*end)->prev = tmp;
	(*end) = tmp;
}

void	ft_pa(t_stack_node **a, t_stack_node **b)
{
	ft_push(b, a);
	ft_printf("pa\n");
}

void	ft_pb(t_stack_node **a, t_stack_node **b)
{
	ft_push(a, b);
	ft_printf("pb\n");
}
