/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bouchrabenjraife07@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:38:50 by bbenjrai          #+#    #+#             */
/*   Updated: 2023/12/07 21:13:04 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	nbr = nb;
	if (nb < 0)
	{
		nbr = -nb;
		count += ft_putchar('-');
	}
	if (nbr < 10)
	{
		count += ft_putchar(nbr + '0');
	}
	if (nbr >= 10)
	{
		count += ft_putnbr(nbr / 10);
		count += ft_putnbr(nbr % 10);
	}
	return (count);
}
