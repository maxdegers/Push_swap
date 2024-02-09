/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/02/09 16:50:23 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_stack_node *a, t_stack_node *b) //ave to be remouve
{	
	ft_printf("liste A:\n");
	while (a)
	{
		ft_printf("\t%i\t%s\n", a->nbr, a->b_nbr);
		a = a->next;
	}
	ft_printf("liste B:\n");
	if (!b)
	{
		ft_printf("\tNULL\n");
	}
	while (b)
	{
		ft_printf("\t%i\t%s\n", b->nbr, b->b_nbr);
		b = b->next;
	}
	ft_printf("\n");
}

static void	ft_setup(t_stack_node *a, t_stack_node *b)
{
	if (!ft_stack_is_sort(a))
	{
		if (ft_listlen(a) == 2)
			ft_sa(&a);
		else if (ft_listlen(a) == 3)
			ft_sort_three(&a);
		else if (ft_listlen(a) <= 5)
			ft_medium_sort(&a, &b);
		else
			ft_solve(&a, &b);
	}
	ft_free_list(&a);
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
		if (!argv)
			return (ft_putstr_fd("Error\n", 2), 1);
		ft_init_stack(&a, argv);
	}
	else
		ft_init_stack(&a, argv + 1);
	// print_list(a, b);
	ft_setup(a, b);
	return (0);
}
