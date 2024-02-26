/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverce_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:29:31 by mbrousse          #+#    #+#             */
/*   Updated: 2024/02/26 22:16:03 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_reverce_rotate(t_stack_node **list)
{
	t_stack_node	*last_node;

	if (!list || !*list || !(*list)->next)
		return ;
	last_node = ft_last_node(list);
	last_node->next = *list;
	(*list)->prev = last_node;
	*list = last_node;
	last_node->prev->next = NULL;
	last_node->prev = NULL;
}

void	ft_rra(t_stack_node **a)
{
	ft_reverce_rotate(a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stack_node **b)
{
	ft_reverce_rotate(b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack_node **a, t_stack_node **b)
{
	ft_reverce_rotate(a);
	ft_reverce_rotate(b);
	ft_printf("rrr\n");
}
