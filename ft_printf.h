/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:17:33 by istili            #+#    #+#             */
/*   Updated: 2023/11/18 02:16:26 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

void	ft_print_char(int c, int *count);
void	ft_print_str(char *str, int *count);
void	ft_print_digit(int n, int *count);
void	ft_print_hex(unsigned int n, char x, int *count);
void	ft_print_ads(void *p, int *count);
void	ft_print_unsigned(unsigned int n, int *count);

#endif
