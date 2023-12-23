/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:56:37 by mkane             #+#    #+#             */
/*   Updated: 2023/12/23 02:36:52 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_fill_stack_a(char *argv)
{
	// t_stack	*stack_a;
	t_env	env;
	t_stack	*tmp;
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split(argv, ' ');
	// stack_a = NULL;
	while (tab[i])
	{
		tmp = ft_create_stack(ft_atoi(tab[i]), i);
		ft_stack_add_back(&env.stack_a, tmp);
		ft_printf("nbr = %d || pos = %d\n", env.stack_a->nb, env.stack_a->pos);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (env.stack_a);
}
