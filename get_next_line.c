/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:27:55 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/24 12:48:11 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

 int get_next_line(const int fd, char **line)
 {
   file = open(filename, O_RDONLY);
   if (file < 0)
   return (NULL);
   while (read(file, &buf, BUFF_SIZE))
   {
     ft_bzero(buf, 21);
   }
   close(file);
 }
