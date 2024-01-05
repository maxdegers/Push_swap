/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:55:09 by mbrousse          #+#    #+#             */
/*   Updated: 2023/12/18 11:00:13 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

size_t		ft_strlen(char *str);
int			ft_printf(const char *str, ...);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putnbr(int n);
int			ft_putunsigned(unsigned int n);
int			ft_putpoint(unsigned long long nbr, char *base);
int			ft_puthexadecimal(unsigned int nbr, char *base);

#endif