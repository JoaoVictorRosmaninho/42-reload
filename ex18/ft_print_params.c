/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:33:04 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/01 20:27:46 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	string;
	int	c;

	string = 1;
	if (argc > 1)
	{
		while (string < argc)
		{
			c = 0;
			while (argv[string][c] != '\0')
			{
				write (1, &argv[string][c], 1);
				c++;
			}
			write (1, "\n", 1);
			string++;
		}
	}
	return (0);
}
