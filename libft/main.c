/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:26:44 by mkane             #+#    #+#             */
/*   Updated: 2023/11/07 18:20:39 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	// testisalpha
	int i =0;
	
	while (i < 256)
	{

		int my_function = ft_isalpha(i);
		int true_function = isalpha(i);
		printf("%d\n", my_function);
		printf("%d\n", true_function);
		printf("==============================\n");
		i++;
	}
	
}