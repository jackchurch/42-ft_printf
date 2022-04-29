/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchurch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:59:24 by jchurch           #+#    #+#             */
/*   Updated: 2022/03/09 12:59:26 by jchurch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_number(unsigned int number, int *len)
{
	if (number > 9)
		ft_number(number / 10, len);
	ft_putchar(number % 10 + '0', len);
}
