/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeondle <hyeondle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:31:01 by hyeondle          #+#    #+#             */
/*   Updated: 2022/07/15 16:54:39 by hyeondle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int num)
{
	if (num > 31 && num < 127)
		return (1);
	else
		return (0);
}
