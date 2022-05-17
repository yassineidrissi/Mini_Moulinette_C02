/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:23:58 by yaidriss             #+#    #+#             */
/*   Updated: 2022/05/17 20:30:20 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../../../libft.h"

int		main(int argc, const char *argv[])
{
	void	*mem;

	alarm(5);
	mem = malloc(sizeof(*mem) * 10);
	if (argc == 1 || !mem)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		ft_memdel(&mem);
		if (!mem)
			write(1, "NULL", 4);
		else
			write(1, "NOT NULL", 8);
	}
	return (0);
}
