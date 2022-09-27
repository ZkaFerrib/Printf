/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:35:54 by gafernan          #+#    #+#             */
/*   Updated: 2022/09/27 14:14:42 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_putnbr(int n)
{
	int	l;

	l = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		l += ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		l += ft_putchar(n + '0');
	else
	{
		l *= ft_putnbr(n / 10);
		l *= ft_putnbr(n % 10);
	}
	return (l);
}
