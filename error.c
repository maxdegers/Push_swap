/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:05:08 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/18 17:51:05 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >! 0 && str[i] <! 9) || str[i] != '-')
		{
			ft_putstr_fd("Error", 0);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_free_list(t_stack_node **list)
{
	t_stack_node	*next;

	while ((*list) != NULL)
	{
		next = (*list)->next;
		free((*list));
		(*list) = next;
	}
	ft_putstr_fd("Error", 0);
	return (1);
}

int	ft_error_duplicated(t_stack_node **list, int nbr)
{
	t_stack_node	*node;

	node = (*list);
	while (node->next != NULL)
	{
		if (node->nbr == nbr)
		{
			ft_putstr_fd("Error", 0);
			return (1);
		}
		node = node->next;
	}
	return (0);
}
