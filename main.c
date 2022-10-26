/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:37:39 by gaizkaferna       #+#    #+#             */
/*   Updated: 2022/10/25 18:37:46 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	a[] = "janksdiadb";

	printf("\n---TEST---\n\nChar:\n");
	printf("Salida -> %d\n", printf("%c\n", 'T'));
	printf("Salida -> %d\n", ft_printf("%c\n", 'T'));
	printf("Salida -> %d\n", printf("%%\n"));
	printf("Salida -> %d\n", ft_printf("%%\n"));
	printf("Salida -> %d\n", printf("%s\n", a));
	printf("Salida -> %d\n", ft_printf("%s\n", a));
	printf("Salida -> %d\n", printf("%p\n", a));
	printf("Salida -> %d\n", ft_printf("%p\n", a));
	printf("Salida -> %d\n", printf("%d\n", -12345));
	printf("Salida -> %d\n", ft_printf("%d\n", -12345));
	printf("Salida -> %d\n", printf("%i\n", -12345));
	printf("Salida -> %d\n", ft_printf("%i\n", -12345));
	printf("Salida -> %d\n", printf("%u\n", 12345));
	printf("Salida -> %d\n", ft_printf("%u\n", 12345));
	printf("Salida -> %d\n", printf("%x\n", 152141323));
	printf("Salida -> %d\n", ft_printf("%x\n", 152141323));
	printf("Salida -> %d\n", printf("%X\n", 152141323));
	printf("Salida -> %d\n", ft_printf("%X\n", 152141323));
	return (0);
}