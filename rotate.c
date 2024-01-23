/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:27:31 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/23 19:03:22 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_stack_node **list)
{
	t_stack_node	*tmp;
	t_stack_node	*tmp_node;
	
	if (!list || !*list || !(*list)->next)
        return;
	tmp_node = *list;
	*list = (*list)->next;
	tmp = ft_last_node(list);
	tmp->next = tmp_node;
	tmp_node->prev = tmp;
	tmp_node->next = NULL;
	(*list)->prev = NULL;
}

void	ft_ra(t_stack_node **a, bool action)
{
	ft_rotate(a);
	if (!action)
		ft_printf("ra\n");
}

void	ft_rb(t_stack_node **b, bool action)
{
	ft_rotate(b);
	if (!action)
		ft_printf("rb\n");
}
void	ft_rr(t_stack_node **a, t_stack_node **b, bool action)
{
	ft_rotate(a);
	ft_rotate(b);
	if (!action)
		ft_printf("rr\n");
}