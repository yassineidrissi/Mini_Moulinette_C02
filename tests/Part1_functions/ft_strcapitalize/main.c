/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:27:43 by yaidriss             #+#    #+#             */
/*   Updated: 2022/05/17 20:30:20 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../../../libft.h"

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char str[] = "  lorem IPsuM dOlor sit amet  ";
		ft_print_result(ft_strcapitalize(str));
	}
	else if (arg == 2)
	{
		char str[] = " \n\tlorem 4ipsum DOLOR s\nit aMeT ";
		ft_print_result(ft_strcapitalize(str));
	}
	else if (arg == 3)
	{
		char str[] = "salut, comment tu vas ? 42mots trente-deux; vingt+et+un";
		ft_print_result(ft_strcapitalize(str));
	}
	return (0);
}
