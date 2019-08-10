/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstiedem <oleg.plakida@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:38:20 by gstiedem          #+#    #+#             */
/*   Updated: 2019/05/25 13:00:32 by gstiedem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

typedef struct		s_elem
{
	int				num;
	struct s_elem	*next;
	struct s_elem	*prev;
}					t_elem;

typedef struct	s_stack
{
	size_t		size;
	t_elem		*first;
	t_elem		*last;
}				t_stack;

int				exec(char *command, t_stack stack_a, t_stack stack_b);

#endif
