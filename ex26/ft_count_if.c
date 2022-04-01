/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:51:31 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/01 15:04:58 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	total;
	int	index;

	total = 0;
	index = 0;
	while (tab[index] != 0)
	{
		total += f(tab[index]);
		index++;
	}
	return (total);
}
/*
int ft_exist(char *c){
	printf("*c => %c\n",*c);
	if(*c){
		return (1);
	}
	return (0);
}


int main(){
	char *c1 = "Olá";
	char **tab;
	
	tab = &c1;
	printf("total => %d\n",ft_count_if(tab, &ft_exist));
}
*/
