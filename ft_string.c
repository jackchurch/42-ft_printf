/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchurch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:59:19 by jchurch           #+#    #+#             */
/*   Updated: 2022/03/09 12:59:20 by jchurch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string(char *arg, int *len)
{
	int	i;

	i = 0;
	if (arg == NULL)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (arg[i] != '\0')
	{
		ft_putchar(arg[i], len);
		i++;
	}
}