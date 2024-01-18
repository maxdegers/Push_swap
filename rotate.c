/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:27:31 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/18 14:00:24 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_rotate(t_stack_node **list)
{
	
}

void ft_ra(t_stack_node **a, bool action)
{
	ft_rotate(a);
	if (!action)
		ft_printf("ra");
}

void ft_rb(t_stack_node **b, bool action)
{
	ft_rotate(b);
	if (!action)
		ft_printf("rb");
}
void ft_rr(t_stack_node **a, t_stack_node **b, bool action)
{
	ft_rotate(a);
	ft_rotate(b);
	if (!action)
		ft_printf("rr");
}