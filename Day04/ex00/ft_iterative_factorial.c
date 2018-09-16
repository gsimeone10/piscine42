/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:46:50 by gsimeone          #+#    #+#             */
/*   Updated: 2018/09/14 17:00:30 by gsimeone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int n;

	n = nb;
	i = 1;
	while(n > 0)
	{
		if(nb < 1 || nb < 13)
		{
			nb = nb * (n - i);
		}
		else
			return(0);
		i++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return(0);
}
