/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:15:19 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/18 16:12:01 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_last_node(t_stack_node **list)
{
	t_stack_node	*node;

	node = (*list);
	while (node->next != NULL)
		node = node->next;
	return (node);
}

// ft_new_node()

int	ft_init_stack(t_stack_node **a, char **argv)
{
	int				i;
	t_stack_node	*node;

	i = 0;
	while (!argv[i])
	{
		if (ft_error_str(argv[i]) != 0)
			return (ft_free_list(a));
		node = ft_new_node(ft_atoi(argv[i]));
		if (ft_error_duplicated(a, node->nbr) != 0)
			return (ft_free_list(a), free(node), 1);
		node->prev = ft_last_node(a);
		i++;
	}
	return (0);
}
