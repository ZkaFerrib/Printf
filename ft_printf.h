/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:22:56 by gafernan          #+#    #+#             */
/*   Updated: 2022/10/25 11:51:17 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_putnbr(int i);
int	ft_putstr(char *str);
int	ft_puthexa(unsigned int n, char *base);
int	ft_putvoid(unsigned long n, char *base, int start);
int	ft_check(va_list list, const char c);
int	ft_putunbr(unsigned int n);

#endif