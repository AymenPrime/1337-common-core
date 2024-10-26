/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:53 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/25 11:52:52 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



//#include <stdio.h>
//#include <libft.h>

int ft_isalpha(int c) { 
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                return 1;
            }
        return 0;
}

/*int main() {
    int c = 122;
    int c1 = 121;
    printf("%d\n", ft_isalpha(c));
    printf("%d\n", ft_isalpha(c1));
}*/