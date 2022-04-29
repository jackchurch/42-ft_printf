/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchurch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:21:38 by jchurch           #+#    #+#             */
/*   Updated: 2022/03/09 13:21:40 by jchurch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(size_t arg, int *len)
{
	int		i;
	char	byte[50];
	char	*byte_as_string;

	byte_as_string = "0123456789abcdef";
	if (write(1, "0x", 2))
	{
		(*len) += 2;
	}
	i = 0;
	if (arg == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (arg != 0)
	{
		byte[i] = byte_as_string[arg % 16];
		arg /= 16;
		i++;
	}
	while (i--)
		ft_putchar(byte[i], len);
}
