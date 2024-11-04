/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:54:39 by marvin            #+#    #+#             */
/*   Updated: 2024/11/03 18:54:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    int i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i]) {
        f(i, &s[i]);
        i++;
    }
}

char ex(unsigned int i, char *s) {
    
}