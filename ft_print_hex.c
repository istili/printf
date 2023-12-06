/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:50:58 by istili            #+#    #+#             */
/*   Updated: 2023/11/18 02:28:30 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int n, char x, int *count)
{
	char	*base;

	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_print_hex(n / 16, x, count);
		ft_print_hex(n % 16, x, count);
	}
	else
	{
		if (*count != -1)
			ft_print_char(base[n], count);
		if (*count == -1)
			return ;
	}
}
