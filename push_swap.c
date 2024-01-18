/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/18 15:29:48 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char const **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || argc == 2 && argv[2] == NULL)
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		ft_init_stack(&a, argv);
	}
	else if (argc > 2)
		ft_init_stack(&a, argv + 1);
	while ()
	{
		
	}
	
	return (0);
}
