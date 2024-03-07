/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:05:08 by mbrousse          #+#    #+#             */
/*   Updated: 2024/03/07 13:26:37 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_str(char *str)
{
	size_t	i;
	size_t	j;
	int		sign;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) != 1)
			return (1);
		i++;
	}
	j = 0;
	while (str[j] && str[j] == '0')
		j++;
	sign = 1;
	if (str[0] == '-')
		sign *= -1;
	if (i - j >= 10 && ((sign == 1 && ft_strncmp(&str[j], "2147483647", 10) < 0)
			|| (sign == -1 && ft_strncmp(&str[j + 1], "2147483648", 10) > 0)))
		return (1);
	return (0);
}

void	ft_free_list(t_stack_node **list)
{
	if (!(*list))
		return ;
	if ((*list)->b_nbr)
		free((*list)->b_nbr);
	if ((*list)->next)
		ft_free_list(&(*list)->next);
	free((*list));
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
			return (1);
		node = node->next;
	}
	return (0);
}

void	ft_freetab(char **tab)
{
	size_t	i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_megafree(t_stack_node **a, char **argv, bool t)
{
	if ((*a))
		ft_free_list(a);
	if (t == true)
		ft_freetab(argv);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
