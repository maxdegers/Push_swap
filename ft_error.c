/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:05:08 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/09 16:33:06 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_error_str(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 0 && str[i] > 9 && str[i] != '-')
            return (ft_putstr_fd("Eror", 0), 1);
        i++;
    }
    
}

int ft_error(int n, char **tab)
{
    int i;

    if (n == 2)
        if (ft_error_str(tab[1]) == 1)
            return (1);
    i = 1;
    else if (n > 2)
        while (i <= n)
            if (ft_error_str(tab[1]) == 1)
                return (1);
    return (0);int i;

    if (n == 2)
        if (ft_error_str(tab[1]) == 1)
            return (1);
    i = 1;
    else if (n > 2)
        while (i <= n)
            if (ft_error_str(tab[1]) == 1)
                return (1);
    return (0);
}
