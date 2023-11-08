/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:26:44 by mkane             #+#    #+#             */
/*   Updated: 2023/11/08 15:09:30 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	int i =0;
	
	// testisalpha
	// while (i < 256)
	// {

	// 	int my_function = ft_isalpha(i);
	// 	int true_function = isalpha(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }
	
	// testisdigit
	// while (i < 256)
	// {
	// 	int my_function = ft_isdigit(i);
	// 	int true_function = isdigit(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }

	// testisalnum
	// while (i < 256)
	// {

	// 	int my_function = ft_isalnum(i);
	// 	int true_function = isalnum(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }

	// testisascii
	// while (i < 256)
	// {

	// 	int my_function = ft_isascii(i);
	// 	int true_function = isascii(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }

	// testisprint
	// while (i < 256)
	// {

	// 	int my_function = ft_isprint(i);
	// 	int true_function = isprint(i);
	// 	printf("%d\n", my_function);
	// 	printf("%d\n", true_function);
	// 	printf("==============================\n");
	// 	i++;
	// }

	while (i < 256)
	{

		int my_function = ft_isprint(i);
		int true_function = isprint(i);
		printf("%d\n", my_function);
		printf("%d\n", true_function);
		printf("==============================\n");
		i++;
	}
}