/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:13:47 by mkane             #+#    #+#             */
/*   Updated: 2023/11/21 15:48:14 by kane             ###   ########.fr       */
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

	int neg = 16;
	int *p = &neg;
	ft_printf("Mom printf pointer::: %p, %p", s, p);
	printf("\nOriginaal:::%p, %p\n", s, p);

	printf("\n%d === %d\n", ft_printf("%p, %p", s, p), printf("%p, %p", s, p));

	printf("============================\n");

	int a = 10;
	ft_printf("Mom printf int::: %d", a);
	printf("\nOriginaal:::%d\n", a);

	printf("============================\n");

	ft_printf("Mom printf int::: %i|%i|%i|%i|%i|%i|%i", 10, 23, -2, 37, 200, -9999, 977779);
	printf("\nOriginaal:::%i|%i|%i|%i|%i|%i|%i\n", 10, 23, -2, 37, 200, -9999, 977779);

	printf("============================\n");

	unsigned int b = 256;
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
