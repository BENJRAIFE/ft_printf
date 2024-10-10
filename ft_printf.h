/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenjrai <bouchrabenjraife07@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:45:38 by bbenjrai          #+#    #+#             */
/*   Updated: 2023/12/08 10:46:31 by bbenjrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putnbr(int nb);
int	ft_putnbr_base(unsigned int nb, char c);
int	ft_putstring(char *str);
int	ft_putnbr_unsigned(int nb);
int	ft_putnbr_add(void *p);

#endif
