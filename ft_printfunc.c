/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:39:36 by mervcaki          #+#    #+#             */
/*   Updated: 2024/11/08 11:39:36 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char *str)
{
	int	i;

	if (!str)
		return (write (1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_int(int a)
{
	int	count;

	count = 0;
	if (a == -2147483648)
	{
		return (write (1, "-2147483648", 11));
	}
	if (a < 0)
	{
		count += ft_putchar('-');
		a = -a;
	}
	if (a >= 10)
	{
		count += ft_int(a / 10);
	}
	count += ft_putchar((a % 10) + '0');
	return (count);
}

int	ft_hexadec(unsigned int a, char c)
{
	int	count;

	count = 0;
	if (a >= 16)
		count += ft_hexadec (a / 16, c);
	if (c == 'X')
		count += write (1, &"0123456789ABCDEF"[a % 16], 1);
	if (c == 'x')
		count += write (1, &"0123456789abcdef"[a % 16], 1);
	return (count);
}

int	ft_point(unsigned long a, int sign)
{
	int	count;

	count = 0;
	if (a == 0)
		return (write (1, "(nil)", 5));
	if (sign == 1)
	{
		count = count + write (1, "0x", 2);
		sign = 0;
	}
	if (a >= 16)
	{
		count = count + ft_point(a / 16, 0);
	}
	count = count + write (1, &"0123456789abcdef"[a % 16], 1);
	return (count);
}

int	ft_unsignedec(unsigned int a)
{
	int	count;

	count = 0;
	if (a >= 10)
	{
		count = count + ft_unsignedec(a / 10);
	}
	count = count + write (1, &"0123456789"[a % 10], 1);
	return (count);
}
