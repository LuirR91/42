/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:59:11 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/21 15:18:42 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specifier, va_list ap)
{
	int	i;

	i = 0;
	if (specifier == 'c')
		i += ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		i += ft_print_str(va_arg(ap, char *));
	else if (specifier == 'd')
		i += ft_print_digits((long)(va_arg(ap, int)), 10);
	else if (specifier == 'x')
		i += ft_print_digits((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'X')
		i += ft_print_upper_digits((long)(va_arg(ap, unsigned int)), 16);
	else
		i += write (1, &specifier, 1);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	long int	i;

	va_start(ap, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
			i += ft_print_format(*(format++), ap);
		else
			i += write (1, format, 1);
		format++;
	}
	va_end (ap);
	return (i);
}

int main()
{
	int	i;

	i = ft_printf("%x\n", 42);
	ft_printf("Number of chars is %d\n", i);
	i = printf("%x\n", 42);
	printf("Number of chars is %d\n", i);
}