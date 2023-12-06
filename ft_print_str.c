/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:07:51 by istili            #+#    #+#             */
/*   Updated: 2023/11/18 02:25:06 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(char *str, int *count)
{
	if (str == NULL)
	{
		ft_print_str("(null)", count);
		if (*count == -1)
			return ;
		return ;
	}
	while (*str)
	{
		ft_print_char(*str, count);
		if (*count == -1)
			return ;
		str++;
	}
}
