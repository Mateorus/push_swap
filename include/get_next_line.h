/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstiedem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 20:03:08 by gstiedem          #+#    #+#             */
/*   Updated: 2019/04/21 16:43:27 by gstiedem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

# define BUFF_SIZE 100000

typedef struct	s_fdlst
{
	int				fd;
	char			*content;
	char			*start;
	struct s_fdlst	*next;
}				t_fdlst;
int				get_next_line(const int fd, char **line);

#endif
