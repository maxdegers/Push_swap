/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:29:59 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/26 10:59:03 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_last_node(t_stack_node **list)
{
	t_stack_node	*node;
	
	node = (*list);
	if (!node)
		return (NULL);
	while (node->next != NULL)
		node = node->next;
	return (node);
}
size_t	ft_listlen(t_stack_node *list)
{
	size_t			i;

	if (!list)
		return (0);
	i = 1;
	while (list->next != NULL)
	{
		i++;
		list = list->next;
	}
	return (i);
}

static void	ft_append_node(t_stack_node **a, long nbr)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->nbr = nbr;
	node->next = NULL;
	last_node = ft_last_node(a);
	if (!last_node)
	{
		(*a) = node;
		node->prev = NULL;
	}
	else
	{
		last_node->next = node;
		node->prev = last_node;
	}
}

void	ft_init_stack(t_stack_node **a, char **argv)
{
	size_t	i;
	long	n;

	i = 0;
	while (argv[i])
	{
		if (ft_error_str(argv[i]) != 0)
			exit (ft_free_list(a));
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			exit (ft_free_list(a));
		if (ft_error_duplicated(a, (int)n) != 0)
			exit (ft_free_list(a));
		ft_append_node(a ,n);
		i++;
	}
}
