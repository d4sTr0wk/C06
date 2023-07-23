/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: d3strk3k <d3strk3k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:43:09 by maxgarci          #+#    #+#             */
/*   Updated: 2023/07/20 19:14:44 by maxgarci         ###   ########.fr       */
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

	count = argc - 1;
	if (argc != 0)
	{
		while (count != 0)
		{
			write(1, argv[count], ft_strlen(argv[count]));
			write(1, "\n", 1);
			--count;
		}
	}
}
