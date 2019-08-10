/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstiedem <oleg.plakida@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:33:56 by gstiedem          #+#    #+#             */
/*   Updated: 2019/05/26 17:53:00 by gstiedem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(t_stack *stack)
{
	t_elem	*tmp;

	if (stack->size <= 1)
		return (1);
	tmp = stack->first;
	stack->first = tmp->next;
	if (stack->size == 2)
		stack->last = tmp;
	tmp->next = stack->first->next;
	tmp->prev = stack->first;
	stack->first->prev = 0;
	stack->first->next = tmp;
	return (1);
}

static int	push_elem(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->size == 0)
		return (1);
	push(stack_a, stack_b->first->num);
	pop(stack_b);
	return (1);
}

static int	rotate(t_stack *stack)
{
	t_elem	*tmp;

	if (stack->size < 2)
		return (1);
	tmp = stack->first;
	stack->first = tmp->next;
	stack->first->prev = 0;
	stack->last->next = tmp;
	tmp->prev = stack->last;
	tmp->next = 0;
	return (1);
}

static int	rev_rotate(t_stack *stack)
{
	t_elem	*tmp;
	
	if (stack->size < 2)
		return (1);
	tmp = stack->last;
	tmp->prev->next = 0;
	tmp->prev = 0;
	tmp->next = stack->first;
	stack->first = tmp;
		return (1);
}

int			exec(char *cm, t_stack *stack_a, t_stack *stack_b)
{
	if (*(uint32_t*)cm << 8 == SWAP_A)
		return (swap(stack_a));
	else if (*(uint32_t*)cm << 8 == SWAP_B)
		return (swap(stack_b));
	else if (*(uint32_t*)cm << 8 == SWAP_BOTH)
		return (swap(stack_a) || swap(stack_b));
	else if (*(uint32_t*)cm << 8 == PUSH_A)
		return (push_elem(stack_a, stack_b));
	else if (*(uint32_t*)cm << 8 == PUSH_B)
		return (push_elem(stack_b, stack_a));
	else if (*(uint32_t*)cm << 8 == ROTATE_A)
		return (rotate(stack_a));
	else if (*(uint32_t*)cm << 8 == ROTATE_B)
		return (rotate(stack_b));
	else if (*(uint32_t*)cm << 8 == ROTATE_BOTH)
		return (rotate(stack_a) || rotate(stack_b));
	else if (*(uint32_t*)cm == R_ROTATE_A)
		return(rev_rotate(stack_a));
	else if (*(uint32_t*)cm == R_ROTATE_B)
		return (rev_rotate(stack_b));
	else if (*(uint32_t*)cm == R_ROTATE_BOTH)
		return (rev_rotate(stack_a) || rev_rotate(stack_b));
	return (0);
}
