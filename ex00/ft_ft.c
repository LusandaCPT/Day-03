/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lngqose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 09:01:11 by lngqose           #+#    #+#             */
/*   Updated: 2020/07/22 17:40:34 by lngqose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_ft( int *nbr)
{
	*nbr = ('4');	
	}			
			
	void ft_variable(int *var)
{
	*var = ('2');
}
int main (void)
{ 
	int nbr;
	int var;
	nbr = ('4');
	var = ('2');
	ft_ft(&nbr);
	ft_variable(&var);
	write(1, &nbr, 1);
	write(1, &var, 1);
	write(1,"\n", 1);
	return (0);
}

