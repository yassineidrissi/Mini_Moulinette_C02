/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:04:46 by yaidriss             #+#    #+#             */
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
	char	str[] = "abc,def;ghi,jkl.mno,pqr";
	char  *token;
	int		arg;

	if (argc == 1)
		return (0);
	if ((arg = atoi(argv[1])) == 1)
	{
		if ((token = ft_strtok(str, ",")))
		{
			ft_print_result(token);
			while ((token = ft_strtok(NULL, ",")))
				ft_print_result(token);
		}
		else
			ft_print_result("NULL");
	}
	else if (arg == 2)
	{
		if ((token = ft_strtok(str, "y")))
			ft_print_result(token);
		else
			ft_print_result("NULL");
	}
	else if (arg == 3)
	{
		if ((token = ft_strtok(str, ",;.")))
		{
			ft_print_result(token);
			while ((token = ft_strtok(NULL, ",;.")))
				ft_print_result(token);
		}
		else
			ft_print_result("NULL");
	}
	return (0);
}
