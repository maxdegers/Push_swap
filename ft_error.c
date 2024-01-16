/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:05:08 by mbrousse          #+#    #+#             */
/*   Updated: 2024/01/12 12:02:19 by mbrousse         ###   ########.fr       */
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
            return (ft_putstr_fd("Error", 0), 1);
        i++;
    }
    return (0);
}

int ft_error(int n, char **tab)
{
    int i;

    if (n == 1 || n == 2 && !tab[1][0])
        return (1);
    if (n == 2)
        return (ft_error_str(tab[1]));
    i = 1;
    else if (n > 2)
        while (i <= n)
        {
            if (ft_error_str(tab[i]) == 1)
                return (1);
            i++;
        }
    return (0);
}
