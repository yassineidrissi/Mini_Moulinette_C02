/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:25:56 by yaidriss             #+#    #+#             */
/*   Updated: 2022/05/17 20:30:20 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../../../libft.h"

int		main(int argc, const char *argv[])
{
	int		i;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		i = 0;
		while (i <= 47)
		{
			ft_putchar_fd(i, 2);
			i++;
		}
	}
	else if (arg == 2)
	{
		i = '0';
		while (i <= '9')
		{
			ft_putchar_fd(i, 1);
			i++;
		}
	}
	else if (arg == 3)
	{
		i = 58;
		while (i <= 64)
		{
			ft_putchar_fd(i, 2);
			i++;
		}
	}
	else if (arg == 4)
	{
		i = 'A';
		while (i <= 'Z')
		{
			ft_putchar_fd(i, 1);
			i++;
		}
	}
	else if (arg == 5)
	{
		i = 91;
		while (i <= 96)
		{
			ft_putchar_fd(i, 2);
			i++;
		}
	}
	else if (arg == 6)
	{
		i = 'a';
		while (i <= 'z')
		{
			ft_putchar_fd(i, 1);
			i++;
		}
	}
	else if (arg == 7)
	{
		i = 123;
		while (i <= 127)
		{
			ft_putchar_fd(i, 2);
			i++;
		}
	}
	return (0);
}
