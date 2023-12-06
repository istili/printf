/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:56:11 by istili            #+#    #+#             */
/*   Updated: 2023/11/18 02:33:41 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int n, int *count)
{
	if (n >= 10)
	{
		ft_print_unsigned(n / 10, count);
		ft_print_unsigned(n % 10, count);
	}
	else
	{
		if (*count != -1)
			ft_print_char(n + '0', count);
		if (*count == -1)
			return ;
	}
}
