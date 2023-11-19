/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:13:47 by mkane             #+#    #+#             */
/*   Updated: 2023/11/19 00:59:39 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int main()
{
	printf("============================\n");
	
	char c = 'a';
	ft_printf("Mom printf char::: %c", c);
	printf("\nOriginaal:::%c\n", c);

	printf("============================\n");
	
	char *s = "hello world";
	ft_printf("Mom printf string::: %s", s);
	printf("\nOriginaal:::%s\n", s);

	printf("============================\n");

	int *p = NULL;
	ft_printf("Mom printf pointer::: %p, %p", s, p);
	printf("\nOriginaal:::%p, %p\n", s, p);

	printf("============================\n");

	int a = 54984;
	ft_printf("Mom printf int::: %d", a);
	printf("\nOriginaal:::%d\n", a);

	printf("============================\n");

	ft_printf("Mom printf int::: %i", a);
	printf("\nOriginaal:::%i\n", a);

	printf("============================\n");

	unsigned int b = 54984;
	ft_printf("Mom printf unsigned int::: %u", b);
	printf("\nOriginaal:::%u\n", b);

	printf("============================\n");
	
	ft_printf("Mom printf hexa::: %x", b);
	printf("\nOriginaal:::%x\n", b);

	printf("============================\n");
	
	ft_printf("Mom printf hexa::: %X", -b);
	printf("\nOriginaal:::%X\n", -b);

	printf("============================\n");
	
	ft_printf("Mom printf hexa::: %%");
	printf("\nOriginaal:::%%\n");
}
