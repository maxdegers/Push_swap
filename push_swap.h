/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:29 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/12 11:50:32 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool            	above_mediane;
	bool				cheapest;
	struct stack_node	*target_node;
	struct stack_node	*next;
	struct stack_node	*prev;
}	t_stack_node;

int ft_error(int n, char **tab);



#endif
