/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmadec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:49:58 by gmadec            #+#    #+#             */
/*   Updated: 2017/11/08 05:55:30 by gmadec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		count;

	count = 0;
	i = -1;
	while (tab[++i])
		count += (f(tab[i]) == 1) ? 1 : 0;
	return (count);
}
