/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:10:25 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/23 18:21:58 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_swap(t_stack_node **list)
{
	t_stack_node	*tmp;
	
	if (!list || !*list)
		return ;	
	tmp = (*list);
	if (!(*list)->next)
		return ;
	*list = tmp->next;
	tmp->prev = *list;
	tmp->next = (*list)->next;
	(*list)->next = tmp;
	tmp = (*list)->prev;
	tmp->prev = (*list)->next;
	(*list)->prev = NULL;
}

void ft_sa(t_stack_node **a, bool action)
{
	ft_swap(a);
	if (!action)
		ft_printf("sa\n");
}

void ft_sb(t_stack_node **b, bool action)
{
	ft_swap(b);
	if (!action)
		ft_printf("sb\n");
}
void ft_ss(t_stack_node **a, t_stack_node **b, bool action)
{
	ft_swap(a);
	ft_swap(b);
	if (!action)
		ft_printf("ss\n");
}