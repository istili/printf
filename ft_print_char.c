/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:07:51 by istili            #+#    #+#             */
/*   Updated: 2023/11/18 02:22:56 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(int c, int *count)
{
	int	checker;

	checker = write(1, &c, 1);
	if (checker == -1)
		*count = -1;
	else
		*count += 1;
}
