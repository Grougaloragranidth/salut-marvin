/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kse <kse@learner.42.tech>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 22:59:18 by kse               #+#    #+#             */
/*   Updated: 2026/08/25 15:38:51 by kse              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	l;	

	l = 0;
	while (str[l] != '\0')
	{
		if ((str[l] <= 'A' || str[l] >= 'Z')
			&& (str[l] <= 'a' || str[l] >= 'z'))
			return (0);
		l++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("sddsa!"));
	printf("%d\n", ft_str_is_alpha("CoucouLouise"));
	printf("%d\n", ft_str_is_alpha("aad55445asd"));
	printf("%d\n", ft_str_is_alpha("aadads!@#$%^&("));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}*/
