/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchurch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:59:02 by jchurch           #+#    #+#             */
/*   Updated: 2022/03/09 12:59:03 by jchurch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(char x, int *len);
void	ft_number(int number, int *len);
int		ft_printf(char *placeholders, ...);
void	char_is_percent(char next_value, va_list *args, int *len, int *i);
void	ft_string(char *arg, int *len);
void	ft_unsigned_number(unsigned int number, int *len);
void	ft_pointer(size_t arg, int *len);
void	ft_hex(unsigned int number, int *len, char char_case);

#endif