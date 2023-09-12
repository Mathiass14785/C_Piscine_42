/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:13:48 by msilva-g          #+#    #+#             */
/*   Updated: 2023/09/01 07:13:50 by msilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include<stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
             return(0);
        }
    i++;    
    }
    return(1);   
}

// int main()
// {   
//     char str[] = "";

// 	int resul = ft_str_is_lowercase(str);
// 	printf("Valor: %d\n", resul);
// 	return (0);
// }