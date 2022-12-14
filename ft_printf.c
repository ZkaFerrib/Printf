/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:14:24 by gafernan          #+#    #+#             */
/*   Updated: 2022/10/25 21:07:56 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	list;

	i = 0;
	len = 0;
	va_start (list, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_check(list, str[++i]);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}

int	ft_check(va_list list, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_putvoid(va_arg(list, unsigned long), "0123456789abcdef", 1));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(list, unsigned int)));
	else if (c == 'x')
		return (ft_puthexa(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_puthexa(va_arg(list, unsigned int), "0123456789ABCDEF"));
	return (0);
}
