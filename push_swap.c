/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/23 20:10:58 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack_node *a, t_stack_node *b) //ave to be remouve
{	
	ft_printf("liste A:\n");
	while (a)
	{
		ft_printf("\t%i\n", a->nbr);
		a = a->next;
	}
	ft_printf("liste B:\n");
	if (!b)
	{
		ft_printf("\tNULL\n");
	}
	while (b)
	{
		ft_printf("\t%i\n", b->nbr);
		b = b->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || (argc == 2 && argv[1] == NULL))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		ft_init_stack(&a, argv);
	}
	else
		ft_init_stack(&a, argv + 1);
	print_list(a, b);
	ft_rra(&a, false);
	print_list(a, b);
	ft_rra(&a, false);
	print_list(a, b);
	ft_rra(&a, false);
	print_list(a, b);
	ft_rra(&a, false);
	print_list(a, b);
	ft_rra(&a, false);
	print_list(a, b);
	ft_free_list(&a);
	return (0);
}
