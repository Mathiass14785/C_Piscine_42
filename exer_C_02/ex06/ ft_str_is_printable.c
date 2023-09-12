/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:11:17 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/02 19:11:19 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 32 || str[i] == 127)
        {
            return(0);
        }
        i++;
    }
    return(1);
}

// int main()
// {
//     char str2[] = "oii";
//     printf("%d\n", ft_str_is_printable(str2));
//     return (0);
// }
