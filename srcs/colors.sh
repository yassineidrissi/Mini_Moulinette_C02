# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    colors.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 18:26:32 by yaidriss             #+#    #+#              #
#    Updated: 2022/05/17 20:30:02 by yaidriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEFAULT="\033[0m"

if [ ${OPT_NO_COLOR} -eq 1 ]
then
	BOLD=${DEFAULT}
	UNDERLINE=${DEFAULT}

	BLACK=${DEFAULT}
	RED=${DEFAULT}
	GREEN=${DEFAULT}
	YELLOW=${DEFAULT}
	BLUE=${DEFAULT}
	PURPLE=${DEFAULT}
	CYAN=${DEFAULT}
	WHITE=${DEFAULT}
else
	BOLD="\033[1m"
	UNDERLINE="\033[4m"

	BLACK="\033[30m"
	RED="\033[31m"
	GREEN="\033[32m"
	YELLOW="\033[33m"
	BLUE="\033[34m"
	PURPLE="\033[35m"
	CYAN="\033[36m"
	WHITE="\033[37m"
fi
