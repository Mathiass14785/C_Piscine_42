/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:40:47 by msilva-g          #+#    #+#             */
/*   Updated: 2023/08/25 01:40:49 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	divisao;
// 	int	mod;
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 10;
// 	ft_div_mod (a, b, &divisao, &mod);
// 	printf("%d\n", divisao);
// 	printf("%d\n", mod);
// }
