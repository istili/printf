/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ads.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:59:59 by istili            #+#    #+#             */
/*   Updated: 2023/11/18 02:27:52 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hex_ads(unsigned long n, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_print_hex_ads(n / 16, count);
		ft_print_hex_ads(n % 16, count);
	}
	else
	{
		if (*count != -1)
			ft_print_char(base[n], count);
		if (*count == -1)
			return ;
	}
}

void	ft_print_ads(void *p, int *count)
{
	unsigned long	address;

	address = (unsigned long)p;
	ft_print_str("0x", count);
	if (*count == -1)
		return ;
	ft_print_hex_ads(address, count);
	if (*count == -1)
		return ;
}
