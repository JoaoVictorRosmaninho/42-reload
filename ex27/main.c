/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:50:26 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/01 19:50:09 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write (1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write (1, "Too many arguments.\n", 20);
		return (0);
	}
	else
		ft_read(argv[1]);
	return (0);
}
