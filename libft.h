/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:14:21 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/17 21:43:42 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int				ft_isdigit(int c);
char			*ft_strcpy(char *dest, const char *src);
char            *ft_strncpy(char *dest, const char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int 			ft_str_is_lowercase(char *str);
int 			ft_str_is_uppercase(char *str);
int 			ft_str_is_printable(char *str);
char 			*ft_strupcase(char *str);
char 			*ft_strlowcase(char *str);
char 			*ft_strcapitalize(char *str);
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

#endif