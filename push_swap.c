/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/19 09:56:08 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack_node **list) //ave to be remouve
{
	t_stack_node	*node = *list;
	
	ft_printf("Liste :\n");
	while (node != NULL)
	{
		ft_printf("wa\n");
		ft_printf("%i\n", node->nbr);
		node = node->next;
	}
}

int	main(int argc, char **argv)
{
	int				error;
	t_stack_node	*a;
	//t_stack_node	*b;

	a = NULL;
	//b = NULL;
	error = 1;
	if (argc < 2 || (argc == 2 && argv[1] == NULL))
	{
		ft_putstr_fd("Error\n", 0);
		return (1);
	}
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		error = ft_init_stack(&a, argv);
	}
	else if (argc > 2)
		error = ft_init_stack(&a, argv + 1);
	if (error != 0)
		return (1);
	print_list(&a);
	ft_free_list(&a);
	return (0);
}
