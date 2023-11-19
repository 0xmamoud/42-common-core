/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:45:16 by mkane             #+#    #+#             */
/*   Updated: 2023/11/19 01:10:05 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_base(int nbr, char *base)
{
	int	strlen;
	int	baselen;

	strlen = 0;
	baselen = ft_strlen(base);
	if (nbr >= 0 && nbr <= baselen)
		strlen += ft_putchar(base[nbr]);
	else if (nbr < 0)
	{
		strlen += ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr > baselen)
	{
		ft_putnbr_base((nbr / baselen), base);
		ft_putnbr_base((nbr % baselen), base);
	}
	return (strlen);
}
