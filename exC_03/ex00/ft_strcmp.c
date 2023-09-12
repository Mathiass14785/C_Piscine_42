/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:06:05 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/05 15:06:07 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while ((s1[i] != '\0' && n == 0)
		|| (s1[i] == '\0' && n == 0 && s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			n = 0;
		else if (s1[i] > s2[i])
			n = 1;
		else if (s1[i] < s2[i])
			n = -1;
		i++;
	}
	return (n);
}

// int main()
// {
// 	char str1[] = "mathiass";
//     char str2[] = "mathias";

//     int resul = ft_strcmp(str1, str2);
//     printf("%d", resul);
// }