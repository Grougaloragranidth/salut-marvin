/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kse <kse@learner.42.tech>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 17:35:11 by kse               #+#    #+#             */
/*   Updated: 2026/08/17 19:52:07 by kse              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;
	int	i;

	r = 1;
	i = nb;
	while (i >= 1)
	{
		if (i < 0)
			return (0);
		if (i == 0)
			return (1);
		r = r * i;
		i--;
	}
	return (r);
}

int	main(void)
{
	printf("%d\n%d\n%d\n%d\n%d\n", ft_iterative_factorial(8), ft_iterative_factorial(9), ft_iterative_factorial(10), ft_iterative_factorial(-4), ft_iterative_factorial(0));
}
