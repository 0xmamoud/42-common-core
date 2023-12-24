/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:27:47 by mkane             #+#    #+#             */
/*   Updated: 2023/12/24 16:09:24 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_env	env;

	if (argc != 2)
		return (0);
	if (!parsing(argv[1]))
	{
		ft_printf("Error\n");
		return (0);
	}
	env.stack_a = NULL;
	env.stack_b = NULL;
	env.stack_a = ft_fill_stack_a(argv[1]);
	ft_free_stack(env.stack_a);
	return (0);
}
