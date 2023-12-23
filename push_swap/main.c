/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:27:47 by mkane             #+#    #+#             */
/*   Updated: 2023/12/23 02:36:16 by mkane            ###   ########.fr       */
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
	t_stack *current = env.stack_a;
	while (current)
	{
		ft_printf("trest\n");
		ft_printf("nbr = %d || pos = %d\n", current->nb, current->pos);
		current = current->next;
	}
	ft_free_stack(env.stack_a);
	return (0);
}
