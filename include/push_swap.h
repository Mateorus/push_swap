/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstiedem <oleg.plakida@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 12:58:59 by gstiedem          #+#    #+#             */
/*   Updated: 2019/05/26 17:57:19 by gstiedem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft.h"
# include "get_next_line.h"

# define	SWAP_A			0x617300
# define	SWAP_B			0x627300
# define	SWAP_BOTH		0x737300
# define	PUSH_A			0x617000
# define	PUSH_B			0x627000
# define	ROTATE_A		0x617200
# define	ROTATE_B		0x627200
# define	ROTATE_BOTH		0x727200
# define	R_ROTATE_A		0x617272
# define	R_ROTATE_B		0x627272
# define	R_ROTATE_BOTH	0x727272

/*
**************************************TYPES*************************************
*/
typedef struct		s_elem
{
	int				num;
	struct s_elem	*next;
	struct s_elem	*prev;
}					t_elem;

typedef struct		s_stack
{
	size_t			size;
	t_elem			*first;
	t_elem			*last;
}					t_stack;

/*
************************************PUSH_SWAP***********************************
*/

/*
*************************************CHECKER************************************
*/

/*
**************************************UTIL**************************************
*/
int					exec(char *command, t_stack *stack_a, t_stack *stack_b);
/*
*________________________________instructions.c_________________________________
*/
void				push(t_stack *stack, int num);
void				pop(t_stack *stack);
void				kill_stack(t_stack *stack);

#endif
