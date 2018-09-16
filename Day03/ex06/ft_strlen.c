/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:49:03 by gsimeone          #+#    #+#             */
/*   Updated: 2018/09/13 21:35:25 by gsimeone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
	}

	return(0);
}

int		main(void)
{
	char	str[8] = "giovanni";
	int ft_strlen(count);

	ft_putchar(count);
	return(0);
}
