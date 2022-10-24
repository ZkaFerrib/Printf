/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:00:13 by gafernan          #+#    #+#             */
/*   Updated: 2022/09/27 16:15:18 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char *base)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_puthexa((n / 16), base);
		len += ft_putchar(base[n % 16]);
	}
	else
		len += ft_putchar(base[n]);
	return (len);
}
