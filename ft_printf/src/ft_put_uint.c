/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:31:02 by mkane             #+#    #+#             */
/*   Updated: 2023/11/19 01:08:51 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_uint(unsigned int nbr, char *base)
{
	int					strlen;
	unsigned int		baselen;

	strlen = 0;
	baselen = ft_strlen(base);
	if (nbr >= 0 && nbr <= baselen)
		strlen += ft_putchar(base[nbr]);
	else
	{
		ft_ptr_hex((nbr / baselen), base);
		ft_ptr_hex((nbr % baselen), base);
	}
	return (strlen);
}
