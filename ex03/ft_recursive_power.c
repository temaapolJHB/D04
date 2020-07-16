/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:06:12 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/16 11:08:56 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
   if (power < 0)
   {
     return (0);
   }
   else if (power < 1)
   {
	return (1);
   }
   else
   {
     return (nb * ft_recursive_power(nb, power -1));
   }	 
}

