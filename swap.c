/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:10:25 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/19 09:42:56 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_swap(t_stack_node **list)
{
	*list = NULL;
	return ;
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