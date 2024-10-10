/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bouchrabenjraife07@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:48:09 by bbenjrai          #+#    #+#             */
/*   Updated: 2023/12/08 18:21:00 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	mini(va_list args, const char *frma)
{
	int	count;

	count = 0;
	if (*frma == '%')
		count += ft_putchar('%');
	else if (*frma == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (*frma == 's')
		count += ft_putstring(va_arg(args, char *));
	else if (*frma == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (*frma == 'x')
		count += ft_putnbr_base(va_arg(args, unsigned int), *frma);
	else if (*frma == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (*frma == 'X')
		count += ft_putnbr_base(va_arg(args, unsigned int), *frma);
	else if (*frma == 'p')
		count += ft_putnbr_add(va_arg(args, void *));
	else if (*frma == 'u')
		count += ft_putnbr_unsigned(va_arg(args, int));
	return (count);
}

static int	check(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *form, ...)
{
	int		count;
	va_list	args;

	va_start(args, form);
	count = 0;
	while (*form)
	{
		if (*form == '%' && check(*(form + 1), "cspdiuxX%"))
		{
			form++;
			count += mini(args, form);
		}
		else if (*form != '%')
			count += ft_putchar(*form);
		form++;
	}
	va_end(args);
	return (count);
}
