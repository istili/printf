/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:15:31 by istili            #+#    #+#             */
/*   Updated: 2023/12/03 21:09:59 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printf_format(char format, va_list ap, int *count)
{
	if (format == 'c')
		ft_print_char(va_arg(ap, int), count);
	else if (format == 's')
		ft_print_str(va_arg(ap, char *), count);
	else if (format == 'd' || format == 'i')
		ft_print_digit(va_arg(ap, int), count);
	else if (format == 'x' || format == 'X')
		ft_print_hex(va_arg(ap, unsigned int), format, count);
	else if (format == 'u')
		ft_print_unsigned(va_arg(ap, unsigned int), count);
	else if (format == '%')
		ft_print_char('%', count);
	else if (format == 'p')
		ft_print_ads(va_arg(ap, void *), count);
	else
		ft_print_char(format, count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (count == -1)
			break ;
		if (*format == '%')
		{
			format++;
			if (*format)
				printf_format(*format++, ap, &count);
		}
		else
		{
			ft_print_char(*format, &count);
			format++;
		}
	}
	va_end(ap);
	return (count);
}
