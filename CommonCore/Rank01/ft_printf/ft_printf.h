/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:43:26 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/21 15:25:47 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_print_digits(long nbr, int base);
int		ft_print_upper_digits(long nbr, int base);

int		ft_print_format(char specifier, va_list ap);
int		ft_printf(const char *format, ...);

#endif
