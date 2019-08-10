/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstiedem <oleg.plakida@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 12:42:25 by gstiedem          #+#    #+#             */
/*   Updated: 2019/05/26 14:13:18 by gstiedem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	assert(int exp)
{
	if (exp)
		return ;
	ft_putstr("Malloc failed");
	exit(12);
}

void		push(t_stack *stack, int num)
{
	t_elem	*new;

	assert((new = malloc(sizeof(*new))) != 0);
	new->num = num;
	new->prev = 0;
	new->next = stack->first;
	if (!stack->size)
		stack->last = new;
	else
		stack->first->prev = new;
	stack->first = new;
	stack->size++;
}

void		pop(t_stack *stack)
{
	t_elem	*old;

	if (stack->size == 0)
		return ;
	old = stack->first;
	stack->first = old->next;
	if (stack->first)
		stack->first->prev = 0;
	free(old);
	stack->size--;
	return ;
}

void	kill_stack(t_stack *stack)
{
	t_elem	*tmp;

	while(stack->first)
	{
		tmp = stack->first->next;
		free(stack->first);
		stack->first = tmp;
	}
	stack->first = 0;
	stack->last = 0;
	stack->size = 0;
}
