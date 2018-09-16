/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:31:09 by gsimeone          #+#    #+#             */
/*   Updated: 2018/09/16 17:09:54 by gsimeone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if(nb == 0 || nb == 1)
		return(1);
	if(nb < 0 || nb > 12)
		return(0);
	return(nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
	printf("%d", ft_recursive_factorial(13));
	return (0);
}
