/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:34:19 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/01 21:15:44 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(int argc, const char **argv)
{
	int	c;
	int	d;
	int	arg[10000];

	c = 1;
	while (c < argc)
	{
		arg[c] = c;
		c++;
	}
	c = 1;
	while (c < argc)
	{
		d = c + 1;
		while (d < argc)
		{
			if (ft_strcmp(argv[arg[c]], argv[arg[d]]) > 0)
				ft_swap(&arg[c], &arg[d]);
			d++;
		}
		ft_putstr(argv[arg[c++]]);
	}
	return (0);
}
