/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selin <selin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:52:59 by selin             #+#    #+#             */
/*   Updated: 2021/02/18 15:10:13 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	char 		buf[BUFFER_SIZE];
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0 || !line)
		return (-1);

	read(fd, buf, BUFFER_SIZE);
	

}
