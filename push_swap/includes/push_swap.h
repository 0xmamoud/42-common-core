/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:23:14 by mkane             #+#    #+#             */
/*   Updated: 2023/12/23 02:35:47 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

typedef struct s_stack
{
	int				pos;
	int				nb;
	struct s_stack	*next;
}					t_stack;

typedef struct s_env
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}				t_env;

t_stack		*ft_stack_last(t_stack *stack);
t_stack		*ft_create_stack(int nb, int pos);
t_stack		*ft_fill_stack_a(char *argv);
void		ft_stack_add_back(t_stack **stack, t_stack *new);
void		ft_free_tab(char **tab);
void		ft_free_stack(t_stack *stack);
int			ft_check_digit(char *str);
int			parsing(char *argv);
int			ft_check_atoi(char **str);
long long	ft_long_atoi(const char *nptr);

#endif