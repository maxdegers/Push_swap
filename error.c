/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:05:08 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/23 11:54:23 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_str(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) != 1)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_free_list(t_stack_node **list)
{
	t_stack_node	*next;

	if (!list || !(*list))
		return (1);
	while ((*list) != NULL)
	{
		next = (*list)->next;
		free((*list));
		(*list) = next;
	}
	return (0);
}

int	ft_error_duplicated(t_stack_node **list, int nbr)
{
	t_stack_node	*node;

	if (!list)
		return (1);
	node = *list;
	while (node != NULL)
	{
		if (node->nbr == nbr)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		node = node->next;
	}
	return (0);
}
