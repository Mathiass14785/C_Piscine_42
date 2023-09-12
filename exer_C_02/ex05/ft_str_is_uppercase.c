/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:35:46 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/02 16:35:48 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return(0);
        }
    i++;  
    }return(1);
    
}

// int main()
// {   
//     char str[] = "";
// 	printf("Valor: %d\n", ft_str_is_uppercase(str));
// 	return (0);
// }