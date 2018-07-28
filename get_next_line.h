/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:28:08 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/27 16:08:44 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 5
# define MAX_FD 255 /* ulimit -n  = 255*/ /* launchctl limit maxfiles 4864 */

# include <unistd.h>
# include <stdlib.h>
#include "Libft/libft.h"


int get_next_line(const int fd, char **line);

#endif
