/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmadec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:48:59 by gmadec            #+#    #+#             */
/*   Updated: 2017/11/08 05:39:18 by gmadec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	if (nb >= 13 || nb < 0)
		return (0);
	i = nb;
	if (nb == 0)
		return (1);
	while (--i > 1)
		nb *= i;
	return (nb);
}