/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:50:21 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/01 20:07:00 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_read(char *argv)
{
	int		fd;
	char	c;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return ;
	while (read(fd, &c, 1) == 1)
	{
		write(1, &c, 1);
	}
	close(fd);
}
