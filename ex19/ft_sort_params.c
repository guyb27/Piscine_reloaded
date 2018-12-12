/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmadec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 04:21:49 by gmadec            #+#    #+#             */
/*   Updated: 2017/11/08 04:22:26 by gmadec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] && s2[i]))
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char **argv)
{
	int		interne;
	char	*str_tmp;
	int		externe;

	externe = 0;
	while (externe < argc)
	{
		interne = 0;
		while (interne < argc)
		{
			if (ft_strcmp(argv[externe], argv[interne]) < 0)
			{
				str_tmp = argv[externe];
				argv[externe] = argv[interne];
				argv[interne] = str_tmp;
			}
			interne++;
		}
		externe++;
	}
}

void	ft_print_params(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		ft_print_params(argc, argv);
	}
	return (0);
}
