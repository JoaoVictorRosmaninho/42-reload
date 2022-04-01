/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:23:45 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/01 21:17:30 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	qty;
	int	*result;
	int	*r_aux;

	qty = max - min;
	if (qty < 1)
	{
		return (result = NULL);
	}
	else
	{
		result = malloc(sizeof(int) * qty);
		r_aux = result;
	}
	while (min < max)
	{
		*r_aux = min++;
		r_aux++;
	}
	return (result);
}
/*
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
int main (){
	int	*arrayInt,x,y,qty;
	
    x = 5;
	y = 24;
	qty = y - x;
	arrayInt = ft_range(x, y);
	while(qty-- > -1){
		printf("%d, ",*arrayInt);
		arrayInt++;
	}
	return (0);
}
*/
