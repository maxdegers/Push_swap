/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/18 16:18:48 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list()
{
	
}

int	main(int argc, char const **argv)
{
	int				error;
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || argc == 2 && argv[2] == NULL)
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		error = ft_init_stack(&a, argv);
	}
	else if (argc > 2)
		error = ft_init_stack(&a, argv + 1);
	if (error != 0)
		return (1);
	
	
	return (0);
}
