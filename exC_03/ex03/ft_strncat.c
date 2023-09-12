/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 03:57:49 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/07 03:57:52 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	o;

	d = 0;
	o = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[o] != '\0' && o < nb)
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
// char dest[] = "Mathias";
// char str[] = "Galdino";
// printf("%s", ft_strncat(dest,str,2));
// }