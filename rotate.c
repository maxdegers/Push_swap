/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:27:31 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/19 09:42:46 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_stack_node **list)
{
	(*list)->prev = NULL;
	return ;
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