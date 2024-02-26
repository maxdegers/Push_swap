/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/02/26 22:00:41 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_setup(t_stack_node **a, t_stack_node **b)
{
	int	size;

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
	if (argc < 2 || (argc == 2 && argv[1] == NULL))
		return (ft_putstr_fd("Error\n", 2), 1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv || !argv[0])
			return (ft_putstr_fd("Error\n", 2), 1);
		ft_init_stack(&a, argv);
	}
	else
		ft_init_stack(&a, argv + 1);
	ft_setup(&a, &b);
	return (0);
}
