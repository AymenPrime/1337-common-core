/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:17:26 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 10:17:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    ft_putchar_fd(' ', fd);
}
/*#include <fcntl.h>
int main() {
    int fd = open("text.txt", O_WRONLY | O_APPEND | O_CREAT, 0640);
    ft_putendl_fd("yo!", fd);
}*/