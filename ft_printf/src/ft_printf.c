/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:41:45 by mkane             #+#    #+#             */
/*   Updated: 2023/11/19 01:07:32 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		strlen;
	int		i;
	va_list	arg;

	strlen = 0;
	i = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			strlen += ft_parser(arg, *str);
		}
		else
			strlen += ft_putchar(*str);
		str++;
	}
	va_end(arg);
	return (strlen);
}
