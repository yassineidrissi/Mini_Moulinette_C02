/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:26:31 by yaidriss             #+#    #+#             */
/*   Updated: 2022/05/17 20:30:20 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../../../libft.h"

int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_putnbr(0);
	else if (arg == 2)
		ft_putnbr(5);
	else if (arg == 3)
		ft_putnbr(-5);
	else if (arg == 4)
		ft_putnbr(42);
	else if (arg == 5)
		ft_putnbr(-57);
	else if (arg == 6)
		ft_putnbr(164189);
	else if (arg == 7)
		ft_putnbr(-987441);
	else if (arg == 8)
		ft_putnbr(2147483647);
	else if (arg == 9)
		ft_putnbr(-2147483648LL);
	return (0);
}
