/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 06:04:48 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/07 06:04:53 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_find(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] == to_find[i])
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*resul;

	i = 0;
	resul = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0] && ft_find(&str[i], to_find))
		{
			resul = &str[i];
			break ;
		}
		i++;
	}
	return (resul);
}

// int main()
// {
// 	char palavra[27] = "Ola meu nome e Mathias";
// 	printf("%s", ft_strstr(palavra, "nome"));
// }