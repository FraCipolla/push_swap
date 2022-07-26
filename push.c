/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:24:20 by mcipolla          #+#    #+#             */
/*   Updated: 2022/05/11 17:24:20 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(int *ar_1, int *ar_2, int *size_1, int *size_2)
{
	int	i;

	if (*size_1 == 0)
		ft_error();
	i = *size_2;
	while (i > 0)
	{
		ar_2[i] = ar_2[i - 1];
		i--;
	}
	i = 0;
	ar_2[i] = ar_1[i];
	*size_2 += 1;
	*size_1 -= 1;
	while (i < *size_1)
	{
		ar_1[i] = ar_1[i + 1];
		i++;
	}
}

void	ft_push_a(t_struct *data)
{
	write(1, "pa\n", 3);
	ft_push(data->ar_b, data->ar_a, &data->size_b, &data->size_a);
}

void	ft_push_b(t_struct *data)
{
	write(1, "pb\n", 3);
	ft_push(data->ar_a, data->ar_b, &data->size_a, &data->size_b);
}
