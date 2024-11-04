/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:50:34 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 09:50:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd) {
    int i;

    i = 0;
    while (s[i]) 
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    return ;
}
/*#include <fcntl.h>
#include <stdio.h> 
int main() {
    char str[] = "Hello, World!\n";

    int fd = open("text.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
    ft_putstr_fd(str, fd);
    return (0);
}*/