/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:27:55 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/24 16:03:51 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

 int get_next_line(const int fd, char **line)
 {
   char buf[BUFF_SIZE + 1];
   int file;

   file = open(filename, O_RDONLY);
   if (file < 0)
    return (NULL);
   while (read(file, &buf, BUFF_SIZE))
   {
  
   }
   close(file);
 }
