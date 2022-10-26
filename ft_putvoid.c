/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:59:47 by gafernan          #+#    #+#             */
/*   Updated: 2022/10/25 11:57:28 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putvoid(unsigned long n, char *base, int start)
{
	unsigned long	i;
	int				len;

	i = n;
	len = 0;
	if (n == 0)
		return (ft_putstr("0x0"));
	if (start)
		len += ft_putstr("0x");
	if (i > 15)
	{
		len += ft_putvoid(i / 16, base, 0);
		len += ft_putchar(base[i % 16]);
	}
	else
		len += ft_putchar(base[i]);
	return (len);
}
