/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:39:48 by mervcaki          #+#    #+#             */
/*   Updated: 2024/11/08 11:39:52 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_parser(va_list args, char s);
int	ft_putchar(char c);
int	ft_string(char *str);
int	ft_int(int a);
int	ft_hexadec(unsigned int a, char c);
int	ft_point(unsigned long a, int sign);
int	ft_unsignedec(unsigned int a);

#endif