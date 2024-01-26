/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:29 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/26 12:31:08 by mbrousse         ###   ########.fr       */
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
	bool				above_mediane;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

//error
t_stack_node		*ft_last_node(t_stack_node **list);
int					ft_free_list(t_stack_node **list);
int					ft_error_str(char *str);
int					ft_error_duplicated(t_stack_node **list, int nbr);
//utils
int	ft_atol(const char *nptr);
//node utils
size_t				ft_listlen(t_stack_node *list);
t_stack_node		*ft_last_node(t_stack_node **list);
void				ft_init_stack(t_stack_node **a, char **argv);
//solve
bool				ft_stack_is_sort(t_stack_node *list);
// void				ft_solve(t_stack_node **a, t_stack_node **b);
//ft action
void				ft_sa(t_stack_node **a, bool action);
void				ft_sb(t_stack_node **b, bool action);
void				ft_ss(t_stack_node **a, t_stack_node **b, bool action);
void				ft_pa(t_stack_node **a, t_stack_node **b, bool action);
void				ft_pb(t_stack_node **a, t_stack_node **b, bool action);
void				ft_ra(t_stack_node **a, bool action);
void				ft_rb(t_stack_node **b, bool action);
void				ft_rr(t_stack_node **a, t_stack_node **b, bool action);
void				ft_rra(t_stack_node **a, bool action);
void				ft_rrb(t_stack_node **b, bool action);
void				ft_rrr(t_stack_node **a, t_stack_node **b, bool action);

#endif
