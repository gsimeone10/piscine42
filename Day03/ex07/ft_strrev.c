/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 21:38:22 by gsimeone          #+#    #+#             */
/*   Updated: 2018/09/13 22:33:29 by gsimeone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int start;
	int end;
	int rev;

	start = 0;
	end = 0;
	while (str[end] =! '\0')
	{
		end++;
	}
	
	end -= 1;
	while(start <= end)
	{
		rev = str[end];
		str[end] = str[start];
		str[start] = rev;
		start++;
		end--;
	}
}
