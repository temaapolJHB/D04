/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:54:40 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/16 10:54:43 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{ 
   int fact;

   if(nb < 0)
   {
	   return (0)
   }
   if(nb == 0 || nb == 1)
   {
	   retrun (1);
   }

	  fact = nb * ft_recursive_factorial(nb -1);
      return (fact);
}

