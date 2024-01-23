/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/23 11:55:43 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack_node *list) //ave to be remouve
{	
	ft_printf("Liste :\n");
	while (list)
	{
		ft_printf("\t%i\n", list->nbr);
		list = list->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	//t_stack_node	*b;

	a = NULL;
	//b = NULL;
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
	print_list(a);
	ft_free_list(&a);
	return (0);
}
