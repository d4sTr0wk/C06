/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxgarci <maxgarci@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:33:34 by maxgarci          #+#    #+#             */
/*   Updated: 2023/07/19 12:42:51 by maxgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = -1;
	while (str[++count] != '\0')
		;
	return (count);
}

int	main(int argc, char *argv[])
{
	int	count;

	if (argc != 0)
	{
		count = 0;
		while (++count != argc)
		{
			write(1, argv[count], ft_strlen(argv[count]));
			write(1, "\n", 1);
		}
	}
}
