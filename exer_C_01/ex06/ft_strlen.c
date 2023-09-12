/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:40:47 by msilva-g          #+#    #+#             */
/*   Updated: 2023/08/29 15:40:50 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int	ft_strlen( char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main()
// {
// 	char palavra[] = "Hello, world my name is Mathias im love cats";
// 	int resul = ft_strlen(palavra);
// 	printf("O tamanho da string é: %d", resul);
// }
