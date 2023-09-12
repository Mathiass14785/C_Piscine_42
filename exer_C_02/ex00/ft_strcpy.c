/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:20:28 by msilva-g          #+#    #+#             */
/*   Updated: 2023/08/30 17:20:30 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char src[] = "Hello";
// 	char dest[20];

// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }
