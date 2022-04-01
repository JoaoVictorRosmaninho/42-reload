/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:26:36 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/01 15:05:15 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while (length > 0)
	{
		f(*tab);
		tab++;
		length--;
	}
}
/*
void	ft_printf(int x){
	printf("x => %d\n",x);
}

int main(){
	int tab[5] = {1,2,3,4,5};
	ft_foreach(tab, 5, &ft_printf);
}
*/
