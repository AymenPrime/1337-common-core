/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:32:01 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 10:32:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (nb < 0) {
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10) {
		ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	if (nb < 10)
        ft_putchar_fd(nb + 48, fd);
}
#include <fcntl.h>
int main() {
    int fd = open("text.txt", O_WRONLY | O_APPEND | O_CREAT, 0640); 
    ft_putnbr_fd(10, fd);
}