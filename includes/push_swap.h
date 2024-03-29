/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:38:29 by mbrousse          #+#    #+#             */
/*   Updated: 2024/03/07 13:29:18 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					nbr;
	int					rank;
	char				*b_nbr;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

//error
t_stack_node		*ft_last_node(t_stack_node **list);
void				ft_free_list(t_stack_node **list);
int					ft_error_str(char *str);
int					ft_error_duplicated(t_stack_node **list, int nbr);
void				ft_freetab(char **tableau);
void				ft_megafree(t_stack_node **a, char **argv, bool t);
//utils
void				ft_set_rank(t_stack_node **list);
long				ft_atol(const char *nptr);
//node utils
char				*ft_bin(unsigned int nbr);
size_t				ft_listlen(t_stack_node *list);
t_stack_node		*ft_last_node(t_stack_node **list);
void				ft_init_stack(t_stack_node **a, char **argv, bool t);
//solve
int					ft_stack_is_sort(t_stack_node **a);
void				ft_sort_three(t_stack_node **a);
void				ft_solve(t_stack_node **a, t_stack_node **b);
void				ft_medium_sort(t_stack_node **a, t_stack_node **b);
void				ft_medium_small_sort(t_stack_node **a, t_stack_node **b);
//ft action
void				ft_sa(t_stack_node **a);
void				ft_sb(t_stack_node **b);
void				ft_ss(t_stack_node **a, t_stack_node **b);
void				ft_pa(t_stack_node **a, t_stack_node **b);
void				ft_pb(t_stack_node **a, t_stack_node **b);
void				ft_ra(t_stack_node **a);
void				ft_rb(t_stack_node **b);
void				ft_rr(t_stack_node **a, t_stack_node **b);
void				ft_rra(t_stack_node **a);
void				ft_rrb(t_stack_node **b);
void				ft_rrr(t_stack_node **a, t_stack_node **b);
#endif
