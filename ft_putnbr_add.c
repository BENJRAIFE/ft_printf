/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bouchrabenjraife07@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:44:55 by bbenjrai          #+#    #+#             */
/*   Updated: 2023/12/08 18:23:06 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert(unsigned long add, char *base)
{
	int	count;

	count = 0;
	if (add < 16)
	{
		count += ft_putchar(base[add]);
	}
	else if (add > 16)
	{
		count += convert(add / 16, base);
		count += convert(add % 16, base);
	}
	else
		count += ft_putstring("10");
	return (count);
}

int	ft_putnbr_add(void *p)
{
	char			*base;
	int				count;
	unsigned long	address;

	address = (unsigned long)p;
	count = 0;
	base = "0123456789abcdef";
	count += ft_putstring("0x");
	count += convert(address, base);
	return (count);
}
