/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:47:02 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/05 20:47:06 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	o;

	d = 0;
	o = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[o] != '\0')
	{
		dest[d] = src[o];
		d++;
		o++;
	}
	dest[d] = '\0';
	return (dest);
}

// int main()
// {
//     char dest[] = "Mathias";
//     char src[] = "Galdino";

//     printf("%s", ft_strcat(dest, src));
// }