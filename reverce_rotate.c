/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverce_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:29:31 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/17 09:35:35 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_reverce_rotate(t_stack_node *list)
{
    
}

void ft_rra(t_stack_node *a, bool action)
{
    ft_reverce_rotate(a);
    if (!action)
        ft_printf("rra");
}

void ft_rrb(t_stack_node *b, bool action)
{
    ft_reverce_rotate(b);
    if (!action)
        ft_printf("rrb");
}
void ft_rrr(t_stack_node *a, t_stack_node *b, bool action)
{
    ft_reverce_rotate(a);
    ft_reverce_rotate(b);
    if (!action)
        ft_printf("rrr");
}