/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:19:09 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/01 21:17:13 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*d_aux;

	dup = malloc (sizeof (src));
	d_aux = dup;
	while (*src)
	{
		*dup = *src;
		src++;
		dup++;
	}
	*dup = '\0';
	return (d_aux);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main (){
	char *c = "HelloWorld";
    
    printf("char => %s.\n",ft_strdup(c));
	return (0);
}
*/
