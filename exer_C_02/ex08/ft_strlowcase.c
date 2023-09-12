/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:53:30 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/03 14:53:32 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] +32;
        }i++;
    }
    return(str);   
}

// int main()
// {
//     char str2[] = "HI, MY NAME IS MATHIAS";
//     printf("%s\n", ft_strlowcase(str2));
//     return (0);
// }
