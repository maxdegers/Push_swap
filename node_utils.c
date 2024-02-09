/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:29:59 by mbrousse          #+#    #+#             */
/*   Updated: 2024/02/09 01:00:50 by mbrousse         ###   ########.fr       */
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

static char	*ft_bin(int nbr)
{
	int		i;
	char	*binary;
	int		numbits;

	numbits = sizeof(int) * 8;
	binary = malloc(numbits + 1);
	if (!binary)
		return (NULL);
	binary[numbits] = '\0';
	i = numbits -1;
	while (i >= 0)
	{
		binary[i] = (nbr & 1) ? '1' : '0';
		nbr >>= 1;
		i--;
	}
	return (binary);
}

static int	ft_append_node(t_stack_node **a, int nbr)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	node = malloc(sizeof(t_stack_node));
	if (!node)
		return (1);
	node->nbr = nbr;
	node->next = NULL;
	node->b_nbr = ft_bin(nbr);
	if (!node->b_nbr)
		return (1);
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
	return (0);
}

void	ft_init_stack(t_stack_node **a, char **argv)
{
	size_t	i;
	long	n;

	i = 0;
	while (argv[i])
	{
		if (ft_error_str(argv[i]) != 0)
		{
			ft_free_list(a);
			exit(1);
		}
		n = ft_atol(argv[i]);
		if ((n > INT_MAX || n < INT_MIN)
			|| (ft_error_duplicated(a, (int)n) != 0)
			|| (ft_append_node(a ,n) == 1))
		{
			ft_free_list(a);
			exit(1);
		}
		i++;
	}
}
