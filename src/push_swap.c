/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/03/08 13:26:27 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_setup(t_stack_node **a, t_stack_node **b)
{
	size_t	size;

	size = ft_listlen(*a);
	if (ft_stack_is_sort(a) == 0)
	{
		if (size == 2)
			ft_sa(a);
		else if (size == 3)
			ft_sort_three(a);
		else if (size == 4)
			ft_medium_small_sort(a, b);
		else if (size == 5)
			ft_medium_sort(a, b);
		else
			ft_solve(a, b);
	}
	ft_free_list(a);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	b = NULL;
	a = NULL;
	if (argc == 1)
		return (0);
	if (argc < 2 || (argc == 2 && argv[1] == NULL))
		return (ft_putstr_fd("Error\n", 2), 1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv || !argv[0])
			return (free(argv), ft_putstr_fd("Error\n", 2), 1);
		ft_init_stack(&a, argv, true);
	}
	else
		ft_init_stack(&a, argv + 1, false);
	ft_setup(&a, &b);
	return (0);
}
