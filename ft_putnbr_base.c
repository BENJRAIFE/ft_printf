/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bouchrabenjraife07@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:39:01 by bbenjrai          #+#    #+#             */
/*   Updated: 2023/12/07 15:16:28 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nb, char c)
{
	char	*base;
	int		count;

	count = 0;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb < 16)
	{
		count += ft_putchar(base[nb]);
	}
	if (nb > 16)
	{
		count += ft_putnbr_base(nb / 16, c);
		count += ft_putnbr_base(nb % 16, c);
	}
	return (count);
}
