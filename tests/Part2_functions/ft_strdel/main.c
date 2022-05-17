/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:31:46 by yaidriss             #+#    #+#             */
/*   Updated: 2022/05/17 20:30:20 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../../../libft.h"

int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	str = (char *)malloc(sizeof(*str) * 10);
	if (argc == 1 || !str)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		ft_strdel(&str);
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, "NOT NULL", 8);
	}
	return (0);
}
