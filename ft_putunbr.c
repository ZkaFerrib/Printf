/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:53:05 by gafernan          #+#    #+#             */
/*   Updated: 2022/10/24 14:54:06 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 10)
		len += ft_putchar(n + '0');
	else
	{
		len += ft_putunbr(n / 10);
		len += ft_putunbr(n % 10);
	}
	return (len);
}
