/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:30:55 by yaidriss             #+#    #+#             */
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
		ft_putnbr_fd(0, 2);
	else if (arg == 2)
		ft_putnbr_fd(5, 1);
	else if (arg == 3)
		ft_putnbr_fd(-5, 2);
	else if (arg == 4)
		ft_putnbr_fd(42, 1);
	else if (arg == 5)
		ft_putnbr_fd(-57, 2);
	else if (arg == 6)
		ft_putnbr_fd(164189, 1);
	else if (arg == 7)
		ft_putnbr_fd(-987441, 2);
	else if (arg == 8)
		ft_putnbr_fd(2147483647, 1);
	else if (arg == 9)
		ft_putnbr_fd(-2147483648LL, 2);
	return (0);
}
