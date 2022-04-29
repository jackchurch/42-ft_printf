/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchurch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:58:51 by jchurch           #+#    #+#             */
/*   Updated: 2022/03/09 12:58:55 by jchurch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *placeholders, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, placeholders);
	i = 0;
	len = 0;
	while (placeholders[i] != '\0')
	{
		if (placeholders[i] == '%')
		{
			char_is_percent(placeholders[++i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar(placeholders[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}

void	char_is_percent(char next_value, va_list *args, int *len, int *i)
{
	if (next_value == 'c')
		ft_putchar(va_arg(*args, int), len);
	else if (next_value == 's')
		ft_string(va_arg(*args, char *), len);
	else if (next_value == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (next_value == 'd' || next_value == 'i')
		ft_number(va_arg(*args, int), len);
	else if (next_value == 'u')
		ft_unsigned_number(va_arg(*args, unsigned int), len);
	else if (next_value == 'x')
		ft_hex(va_arg(*args, unsigned int), len, 'x');
	else if (next_value == 'X')
		ft_hex(va_arg(*args, unsigned int), len, 'X');
	else if (next_value == '%')
		ft_putchar('%', len);
	else
		(*i)--;
}
