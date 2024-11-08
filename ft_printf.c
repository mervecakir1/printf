/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:39:58 by mervcaki          #+#    #+#             */
/*   Updated: 2024/11/08 15:46:54 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_parser(va_list args, char s)
{
	int	result;

	result = 0;
	if (s == 's')
		result = ft_string(va_arg(args, char *));
	else if (s == 'c')
		result = ft_putchar(va_arg(args, int));
	else if (s == 'i' || s == 'd')
		result = ft_int(va_arg(args, int));
	else if (s == 'x' || s == 'X')
		result = ft_hexadec(va_arg(args, unsigned int), s);
	else if (s == 'p')
		result = ft_point(va_arg(args, unsigned long), 1);
	else if (s == 'u')
		result = ft_unsignedec(va_arg(args, unsigned int));
	else if (s == '%')
		result = ft_string("%");
	else
	{
		result = ft_putchar('%');
		result += ft_putchar(s);
	}
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start (args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			length = length + ft_parser (args, str[i]);
		}
		else
		{
			length = length + write (1, &str[i], 1);
		}
		i++;
	}
	va_end (args);
	return (length);
}
