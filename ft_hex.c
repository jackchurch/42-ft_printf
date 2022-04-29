/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchurch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:20:47 by jchurch           #+#    #+#             */
/*   Updated: 2022/03/09 15:20:48 by jchurch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned int number, int *len, char char_case)
{
	char	byte[50];
	int		i;
	char	*byte_as_string;

	i = 0;
	if (char_case == 'x')
		byte_as_string = "0123456789abcdef";
	else if (char_case == 'X')
		byte_as_string = "0123456789ABCDEF";
	if (number == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (number != 0)
	{
		byte[i] = byte_as_string[number % 16];
		number /= 16;
		i++;
	}
	while (i--)
		ft_putchar(byte[i], len);
}
