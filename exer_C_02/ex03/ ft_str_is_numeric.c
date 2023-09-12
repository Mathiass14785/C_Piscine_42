/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 06:18:47 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/01 06:18:51 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
    {
        return(1);
    }
    while (str[i])
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            i++;
        }
        else{
            return(0);
        }  
    }
    return(1);
}

// int main()
// {
//     char str[] = "";
//     printf("Valor:%d\n", ft_str_is_numeric(str));
//     return(0);
// }
