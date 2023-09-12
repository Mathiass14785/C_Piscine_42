/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:30:06 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/03 13:30:13 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include<stdio.h>
char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] -32;
        }
        i++;
        
    }
    return(str);
}

// int main()
// {
//     char str2[] = "ooi tudo bem?";
//     printf("%s\n", ft_strupcase(str2));
//     return (0);
// }