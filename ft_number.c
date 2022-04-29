/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchurch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:58:37 by jchurch           #+#    #+#             */
/*   Updated: 2022/03/09 12:58:39 by jchurch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_number(int number, int *len)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putchar('-', len);
		ft_number(number * -1, len);
	}
	else
	{
		if (number > 9)
			ft_number(number / 10, len);
		ft_putchar(number % 10 + '0', len);
	}
}
