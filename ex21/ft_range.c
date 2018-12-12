/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmadec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 04:25:29 by gmadec            #+#    #+#             */
/*   Updated: 2017/11/08 04:25:49 by gmadec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ptr_return;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		ptr_return = malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			ptr_return[i] = min;
			i++;
			min++;
		}
		return (ptr_return);
	}
}
