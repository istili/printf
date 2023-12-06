/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:26:14 by istili            #+#    #+#             */
/*   Updated: 2023/11/18 02:36:32 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_digit(int n, int *count)
{
	if (*count == -1)
		return ;
	if (n == -2147483648)
	{
		ft_print_str("-2147483648", count);
		return ;
	}
	else
	{
		if (n < 0)
		{
			if (*count == -1)
				return ;
			ft_print_char('-', count);
			n = -n;
		}
		if (n >= 10)
		{
			ft_print_digit(n / 10, count);
			ft_print_digit(n % 10, count);
		}
		else
			ft_print_char(n + '0', count);
	}
}
