/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:10:25 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/17 09:31:19 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_swap(t_stack_node *list)
{
    
}

void ft_sa(t_stack_node *a, bool action)
{
    ft_swap(a);
    if (!action)
        ft_printf("sa");
}

void ft_sb(t_stack_node *b, bool action)
{
    ft_swap(b);
    if (!action)
        ft_printf("sb");
}
void ft_ss(t_stack_node *a, t_stack_node *b, bool action)
{
    ft_swap(a);
    ft_swap(b);
    if (!action)
        ft_printf("ss");
}